#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
namespace Bedrock::Memory { struct MoodyCamelBedrockMemoryTraits; }
// clang-format on

class GuiContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mEnabled;
    ::ll::TypedStorage<4, 8, ::std::optional<::LogLevel>> mLogLevel;
    ::ll::TypedStorage<
        8,
        616,
        ::moodycamel::
            ConcurrentQueue<::std::pair<::std::string, ::LogLevel>, ::Bedrock::Memory::MoodyCamelBedrockMemoryTraits>>
        mMessages;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuiContentLogEndPoint() /*override*/;

    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    virtual void setEnabled(bool newState) /*override*/;

    virtual bool isEnabled() const /*override*/;

    virtual void flush() /*override*/;

    virtual bool logOnlyOnce() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clear();

    MCAPI bool pushMessagesToUI(::Bedrock::NotNullNonOwnerPtr<::GuiData> const& guiData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCAPI void $setEnabled(bool newState);

    MCFOLD bool $isEnabled() const;

    MCFOLD void $flush();

    MCFOLD bool $logOnlyOnce() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLogEndPoint();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
