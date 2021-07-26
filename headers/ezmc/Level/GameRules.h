#pragma once

#include <string>
#include <vector>

class GameRule {
public:
    enum struct Type : char { Invalid = 0,
                              Boolean = 1,
                              Integer = 2,
                              Float   = 3 };
    union Value {
        bool  val_bool;
        int   val_int;
        float val_float;
    };

    bool        saved = false;
    Type        type  = Type::Invalid;
    Value       value{};
    std::string name;
    bool        use_in_command = false;
    bool        default_set    = false;
    bool        requires_cheat = false;
};

class GameRules {
public:
    std::vector<GameRule>            rules;
    std::map<HashedString, GameRule> unk;
};