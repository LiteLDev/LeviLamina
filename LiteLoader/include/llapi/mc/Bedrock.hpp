/**
 * @file  Bedrock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "llapi/mc/Json.hpp"
#include "llapi/mc/Enchant.hpp"
#include <string>
#include <utility>

class CommandRegistry;
enum class ActorDamageCause : int;
template <typename, typename>
class AutomaticID;
template <typename>
class CommandSelector;

namespace Json {
class Value;
}
class CommandIntegerRange;
struct ActorDefinitionIdentifier;
class CommandItem;
class CommandBlockName;
class CommandWildcardInt;
enum class ObjectiveSortOrder : char;
enum class BlockSlot : int;

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Bedrock.
 *
 */
namespace Bedrock {

#define AFTER_EXTRA
// Add Member There
struct PlatformRuntimeInfo {
    PlatformRuntimeInfo() = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&) = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&&) = delete;
};
class CrashTelemetryProcessor {
public:
    CrashTelemetryProcessor() = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&) = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&&) = delete;
};
struct CrashUploadStatus {
    CrashUploadStatus() = delete;
    CrashUploadStatus(CrashUploadStatus const&) = delete;
    CrashUploadStatus(CrashUploadStatus const&&) = delete;
};
template <typename T0>
class NonOwnerPointer {
public:
    std::shared_ptr<T0> mPtr;

    NonOwnerPointer(T0& a1) {
        mPtr = std::make_shared<T0>(a1);
    }
};

struct StorageMigration {
    enum class StorageMigrationType;
    StorageMigration() = delete;
    StorageMigration(StorageMigration const&) = delete;
    StorageMigration(StorageMigration const&&) = delete;
};

struct CallStack {
    struct FrameWithContext{
        char filler[80];
    };
private:
    std::vector<Bedrock::CallStack::FrameWithContext> vector;
};

template <typename E>
struct ErrorInfo {
public:
    ErrorInfo() = default;

    E& getError() {
        return error;
    }

private:
    E error;
    char filler[0x30]{};
};
static_assert(sizeof(ErrorInfo<std::error_code>) == 0x40);

template <typename T, typename Err>
class Result {
public:
    explicit Result(T&& value) : mValue(std::move(value)), mHasValue(true) {}

    Result(Result&& other)  noexcept {
        mHasValue = other.mHasValue;
        if (mHasValue) {
            mValue = std::move(other.mValue);
        } else {
            mError = std::move(other.mError);
        }
    }

    [[nodiscard]] bool has_value() const {
        return mHasValue;
    }

    T& value() {
        if (!mHasValue) {
            std::rethrow_exception(std::make_exception_ptr(mError.getError()));
        }
        return mValue;
    }

    Err& error() {
        if (mHasValue)
            throw std::logic_error("Bad error result access.");
        return mError;
    }

private:
    union{
        T mValue;
        ErrorInfo<Err> mError;
    };
    bool mHasValue;
};

template <class Err>
class Result<void, Err> {
public:
    explicit Result() : mHasValue(true) {}

    Result(Result&& other)  noexcept {
        mHasValue = other.mHasValue;
        if (!mHasValue) {
            mError = std::move(other.mError);
        }
    }

    [[nodiscard]] bool has_value() const {
        return mHasValue;
    }

    void value() {
        if (!mHasValue) {
            std::rethrow_exception(std::make_exception_ptr(mError.getError()));
        }
        // No value to return as T is void
    }

    Err& error() {
        if (mHasValue)
            throw std::logic_error("Bad error result access.");
        return mError;
    }

private:
    ErrorInfo<Err> mError;
    bool mHasValue;
};

namespace PubSub {
class Subscription {
public:
    Subscription() = delete;
    Subscription(Subscription const&) = delete;
    Subscription(Subscription const&&) = delete;
};
} // namespace PubSub
namespace Threading {
enum class AsyncStatus;
template <typename T0>
class UniqueLock;

class CountReference
{
public:
    CountReference() = delete;
    CountReference(CountReference const&) = delete;
    CountReference(CountReference const&&) = delete;
};
template <typename T0>
class IAsyncResult {
public:
    IAsyncResult() = delete;
    IAsyncResult(IAsyncResult const&) = delete;
    IAsyncResult(IAsyncResult const&&) = delete;
};
template <typename T0, typename T1>
class ThreadLocalObject {
public:
    ThreadLocalObject() = delete;
    ThreadLocalObject(ThreadLocalObject const&) = delete;
    ThreadLocalObject(ThreadLocalObject const&&) = delete;
};
template <typename T>
class LockGuard
{
    MCAPI LockGuard(T);
    MCAPI ~LockGuard();
};
} // namespace Threading

class ScopeExit;
class Http {
public:
    enum class Implementation;
};
class SessionInfo
{
public:
    SessionInfo() = delete;
    SessionInfo(SessionInfo const&) = delete;
    SessionInfo(SessionInfo const&&) = delete;
};


template <typename T>
class typeid_t {
public:
    inline static unsigned short count = 0;
    unsigned short value;
    typeid_t<T>(typeid_t<T> const& id) : value(id.value){};
    typeid_t<T>(unsigned short value) : value(value){};
};

template <typename T, typename T2>
typeid_t<T> type_id() {
    static typeid_t<T> id = typeid_t<T>::_getCounter().fetch_add(1);
    return id;
}

template <>
class typeid_t<CommandRegistry> {
public:
    unsigned short value;

    inline static std::atomic<unsigned short>& _getCounter() {
        std::atomic<unsigned short>& id = *(std::atomic<unsigned short>*)dlsym_real(
            "?storage@?1??_getCounter@?$typeid_t@VCommandRegistry@@@Bedrock@@CAAEAU?$atomic@G@std@@XZ@4U45@A");
        return id;
    }

    typeid_t<CommandRegistry>(typeid_t<CommandRegistry> const& id) : value(id.value){};
    typeid_t<CommandRegistry>(unsigned short value) : value(value){};
};

template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDamageCause>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, AutomaticID<class Dimension, int>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandBlockName>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, bool>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandMessage>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum class CommandOperator>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPosition>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPositionFloat>();
// template <>
// MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandSelector<class Actor>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandSelector<class Player>>();
// template <>
// MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum class EquipmentSlot>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, float>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, int>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, Json::Value>();
// template <>
// MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum class Mirror>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class MobEffect const*>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class RelativeFloat>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::string>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::unique_ptr<class Command>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class WildcardCommandSelector<class Actor>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandItem>();
// template <>
// MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandIntegerRange>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDefinitionIdentifier const*>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandRawText>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<class CommandRegistry, class CommandWildcardInt>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<class CommandRegistry, enum ObjectiveSortOrder>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<class CommandRegistry, enum BlockSlot>();

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, enum class Mirror>() {
    auto id = (unsigned short*)dlsym_real(
        "?id@?1???$type_id@VCommandRegistry@@W4Mirror@@@Bedrock@@YA?AV?$typeid_t@VCommandRegistry@@@1@XZ@4V21@A");
        return typeid_t<CommandRegistry>(*id);
}

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, CommandIntegerRange>() {
    auto id = (unsigned short*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@VCommandIntegerRange@@@Bedrock@@YA?AV?$"
                                          "typeid_t@VCommandRegistry@@@1@XZ@4V21@A");
    return typeid_t<CommandRegistry>(*id);
}

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, EquipmentSlot>() {
    auto id = (unsigned short*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@W4EquipmentSlot@@@Bedrock@@YA?AV?$"
                                          "typeid_t@VCommandRegistry@@@1@XZ@4V21@A");
    return typeid_t<CommandRegistry>(*id);
}

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, Enchant::Type>() {
    auto id = (unsigned short*)dlsym_real(
        "?id@?1???$type_id@VCommandRegistry@@W4Type@Enchant@@@Bedrock@@YA?AV?$typeid_t@VCommandRegistry@@@1@XZ@4V21@A");
    return typeid_t<CommandRegistry>(*id);
}



#undef AFTER_EXTRA
    /**
     * @symbol ?strtoint32\@Bedrock\@\@YAHPEBDPEAPEADH\@Z
     */
    MCAPI int strtoint32(char const *, char **, int);
    /**
     * @symbol ?strtouint32\@Bedrock\@\@YAIPEBDPEAPEADH\@Z
     */
    MCAPI unsigned int strtouint32(char const *, char **, int);
    /**
     * @symbol ?throw_system_error\@Bedrock\@\@YAXW4errc\@std\@\@\@Z
     */
    MCAPI void throw_system_error(enum class std::errc);

};