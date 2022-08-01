#include <string>
#include <map>

enum {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

#define debug "debug"
#define info "info"
#define warning "warning"
#define error "error"

class Harl;

typedef void (Harl::*fptr)(void);

typedef struct s_ptrmap {
	std::string	name;
	fptr		func;
}	t_ptrmap;

class Harl
{
private:
	s_ptrmap	_map[4];
	void		_debug(void);
	void		_info(void);
	void		_warning(void);
	void		_error(void);
public:
	Harl();
	~Harl();
	void	complain(std::string);
};
