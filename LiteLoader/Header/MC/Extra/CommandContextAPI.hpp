//Extra Part For CommandContext.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here
#include <string>

#else
// Add Member There

public:
    std::string command;
    CommandOrigin* origin;
    int Version = 10;

    std::string& getCmd() {
        return command;
    }
    class CommandOrigin& getOrigin() {
        return *origin;
    }

    template <typename T>
    CommandContext(T&& x, CommandOrigin* o)
        : command(std::forward<T>(x)), origin(o)
    { }

#endif
