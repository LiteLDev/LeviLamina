//Extra Part For CommandContext.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here


#else
// Add Member There

public:
    std::string Cmd;
    CommandOrigin* Ori;
    int Version = 10;

    std::string& getCmd() {
        return Cmd;
    }
    class CommandOrigin& getOrigin() {
        return *Ori;
    }

    template <typename T>
    CommandContext(T&& x, CommandOrigin* o)
        : Cmd(std::forward<T>(x)), Ori(o)
    { }

#endif
