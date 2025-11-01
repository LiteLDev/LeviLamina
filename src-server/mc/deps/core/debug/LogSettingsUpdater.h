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
    // vIndex: 0
    virtual ~LogSettingsUpdater() = default;

    // vIndex: 1
    virtual void save() = 0;

    // vIndex: 2
    virtual bool getDevLogAppend() const = 0;

    // vIndex: 3
    virtual void setDevLogAppend(bool) = 0;

    // vIndex: 4
    virtual bool getDevLogFlushImmediate() const = 0;

    // vIndex: 5
    virtual void setDevLogFlushImmediate(bool) = 0;

    // vIndex: 6
    virtual int getDevLogFlushDelay() const = 0;

    // vIndex: 7
    virtual void setDevLogFlushDelay(int) = 0;

    // vIndex: 8
    virtual bool getDevLogTimestamp() const = 0;

    // vIndex: 9
    virtual void setDevLogTimestamp(bool) = 0;

    // vIndex: 10
    virtual bool getDevLogTrace() const = 0;

    // vIndex: 11
    virtual void setDevLogTrace(bool) = 0;

    // vIndex: 12
    virtual bool getDevLogArea() const = 0;

    // vIndex: 13
    virtual void setDevLogArea(bool) = 0;

    // vIndex: 14
    virtual bool getDevLogPriority() const = 0;

    // vIndex: 15
    virtual void setDevLogPriority(bool) = 0;

    // vIndex: 16
    virtual bool getDevLogProcessId() const = 0;

    // vIndex: 17
    virtual void setDevLogProcessId(bool) = 0;

    // vIndex: 18
    virtual bool getDevLogThreadId() const = 0;

    // vIndex: 19
    virtual void setDevLogThreadId(bool) = 0;

    // vIndex: 20
    virtual bool getDevLogMessageId() const = 0;

    // vIndex: 21
    virtual void setDevLogMessageId(bool) = 0;

    // vIndex: 22
    virtual bool getDevLogSilentLogging() const = 0;

    // vIndex: 23
    virtual void setDevLogSilentLogging(bool) = 0;

    // vIndex: 24
    virtual ::std::string const& getDevLogAreaFilter() const = 0;

    // vIndex: 25
    virtual void setDevLogAreaFilter(::std::string const&) = 0;

    // vIndex: 26
    virtual ::Bedrock::PubSub::Subscription registerDevLogAreaObserver(::std::function<void(::std::string const&)>) = 0;

    // vIndex: 27
    virtual ::std::string const& getDevLogPriorityFilter() const = 0;

    // vIndex: 28
    virtual void setDevLogPriorityFilter(::std::string const&) = 0;

    // vIndex: 29
    virtual ::Bedrock::PubSub::Subscription registerDevLogPriorityObserver(::std::function<void(::std::string const&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
