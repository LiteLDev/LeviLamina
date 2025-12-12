#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LogSettingsUpdater {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LogSettingsUpdater() = default;

    virtual void save() = 0;

    virtual bool getDevLogAppend() const = 0;

    virtual void setDevLogAppend(bool) = 0;

    virtual bool getDevLogFlushImmediate() const = 0;

    virtual void setDevLogFlushImmediate(bool) = 0;

    virtual int getDevLogFlushDelay() const = 0;

    virtual void setDevLogFlushDelay(int) = 0;

    virtual bool getDevLogTimestamp() const = 0;

    virtual void setDevLogTimestamp(bool) = 0;

    virtual bool getDevLogTrace() const = 0;

    virtual void setDevLogTrace(bool) = 0;

    virtual bool getDevLogArea() const = 0;

    virtual void setDevLogArea(bool) = 0;

    virtual bool getDevLogPriority() const = 0;

    virtual void setDevLogPriority(bool) = 0;

    virtual bool getDevLogProcessId() const = 0;

    virtual void setDevLogProcessId(bool) = 0;

    virtual bool getDevLogThreadId() const = 0;

    virtual void setDevLogThreadId(bool) = 0;

    virtual bool getDevLogMessageId() const = 0;

    virtual void setDevLogMessageId(bool) = 0;

    virtual bool getDevLogSilentLogging() const = 0;

    virtual void setDevLogSilentLogging(bool) = 0;

    virtual ::std::string const& getDevLogAreaFilter() const = 0;

    virtual void setDevLogAreaFilter(::std::string const&) = 0;

    virtual ::Bedrock::PubSub::Subscription registerDevLogAreaObserver(::std::function<void(::std::string const&)>) = 0;

    virtual ::std::string const& getDevLogPriorityFilter() const = 0;

    virtual void setDevLogPriorityFilter(::std::string const&) = 0;

    virtual ::Bedrock::PubSub::Subscription
        registerDevLogPriorityObserver(::std::function<void(::std::string const&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
