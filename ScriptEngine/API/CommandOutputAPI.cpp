#include "CommandOutputAPI.h"

//////////////////// Class Definition ////////////////////

ClassDefine<CommandOutputClass> CommandOutputClassBuilder =
    defineClass<CommandOutputClass>("LLSE_CommandOutput")
        .constructor(nullptr)
        .instanceProperty("empty", &CommandOutputClass::empty)
        //.instanceProperty("type", &CommandOutputClass::getType)
        .instanceProperty("successCount", &CommandOutputClass::getSuccessCount)

        .instanceFunction("success", &CommandOutputClass::success)
        .instanceFunction("error", &CommandOutputClass::error)
        .instanceFunction("addMessage", &CommandOutputClass::addMessage)
        .instanceFunction("toString", &CommandOutputClass::toString)

        .build();

//////////////////// APIs ////////////////////

CommandOutputClass::CommandOutputClass(CommandOutput* p)
: ScriptClass(ScriptClass::ConstructFromCpp<CommandOutputClass>{}), ptr(p){};

Local<Object> CommandOutputClass::newCommandOutput(CommandOutput* p) {
    auto newp = new CommandOutputClass(p);
    return newp->getScriptObject();
}

// MCAPI bool empty() const;
Local<Value> CommandOutputClass::empty() {
    try {
        return Boolean::newBoolean(get()->empty());
    }
    CATCH("Fail in empty!");
}


// MCAPI int getSuccessCount() const;
Local<Value> CommandOutputClass::getSuccessCount() {
    try {
        return Number::newNumber(get()->getSuccessCount());
    }
    CATCH("Fail in getSuccessCount!");
};

// MCAPI enum CommandOutputType getType() const;
// Local<Value> CommandOutputClass::getType()
//{
//     try
//     {
//         return String::newString(magic_enum::enum_name(get()->getType()));
//     }
//     CATCH("Fail in getType!");
// };

// MCAPI void success(std::string const&, std::vector<class CommandOutputParameter> const&);
// MCAPI void success();
Local<Value> CommandOutputClass::success(const Arguments& args) {
    try {
        if (args.size() == 0) {
            get()->success();
            return Boolean::newBoolean(true);
        }
        CHECK_ARG_TYPE(args[0], ValueKind::kString);
        auto msg = args[0].toStr();
        get()->success(msg);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in success!");
};

Local<Value> CommandOutputClass::addMessage(const Arguments& args) {
    try {
        CHECK_ARG_TYPE(args[0], ValueKind::kString);
        auto msg = args[0].toStr();
        get()->addMessage(msg);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in addMessage!");
};

// MCAPI void error(std::string const&, std::vector<class CommandOutputParameter> const&);
Local<Value> CommandOutputClass::error(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        auto msg = args[0].toStr();
        get()->error(msg);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in error!");
};

Local<Value> CommandOutputClass::toString(const Arguments& args) {
    try {
        return String::newString("<CommandOutput>");
    }
    CATCH("Fail in toString!");
};
