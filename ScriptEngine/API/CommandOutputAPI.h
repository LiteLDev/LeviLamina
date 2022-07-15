#pragma once
#include "APIHelp.h"
#include <MC/CommandOutput.hpp>

class CommandOutputClass;
extern ClassDefine<CommandOutputClass> CommandOutputClassBuilder;

class CommandOutputClass : public ScriptClass {
    CommandOutput* ptr;
    inline CommandOutput* get() {
        return ptr;
    }

public:
    CommandOutputClass(CommandOutput* p);
    static Local<Object> newCommandOutput(CommandOutput* p);

    // MCAPI bool empty() const;
    Local<Value> empty();

    // MCAPI int getSuccessCount() const;
    Local<Value> getSuccessCount();

    // MCAPI enum CommandOutputType getType() const;
    // Local<Value> getType();

    // MCAPI void success(std::string const&, std::vector<class CommandOutputParameter> const&);
    // MCAPI void success();
    Local<Value> success(const Arguments& args);

    Local<Value> addMessage(const Arguments& args);

    // MCAPI void error(std::string const&, std::vector<class CommandOutputParameter> const&);
    Local<Value> error(const Arguments& args);

    // MCAPI void setHasPlayerText();
    // Local<Value> setHasPlayerText()
    //{
    //     try
    //     {
    //         get()->setHasPlayerText();
    //         return Boolean::newBoolean(true);
    //     }
    //     CATCH("Fail in getBlockPosition!");
    // };
    // MCAPI bool wantsData() const;
    // Local<Value> wantsData()
    //{
    //     try
    //     {
    //         return Boolean::newBoolean(get()->wantsData());
    //     }
    //     CATCH("Fail in getBlockPosition!");
    // };
    // MCAPI void addToResultList(std::string const&, std::string const&);
    // MCAPI void addToResultList(std::string const&, class Actor const&);
    // Local<Value> addToResultList(const Arguments& args);
    // MCAPI void forceOutput(std::string const&, std::vector<class CommandOutputParameter> const&);
    // Local<Value> forceOutput(const Arguments& args);
    // MCAPI class CommandPropertyBag const& getData() const;
    // Local<Value> getData() const;
    // MCAPI std::vector<class CommandOutputMessage> const& getMessages() const;
    // Local<Value> getMessages() const;
    // MCAPI void load(enum CommandOutputType, int, std::vector<class CommandOutputMessage>&&, std::unique_ptr<class
    // CommandPropertyBag>&&); Local<Value> load(const Arguments& args);

    Local<Value> toString(const Arguments& args);
};
