#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class LoggingService; }
// clang-format on

namespace Editor {

class EditorContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaacd73;
    ::ll::UntypedStorage<1, 1>  mUnk8d16ba;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorContentLogEndPoint& operator=(EditorContentLogEndPoint const&);
    EditorContentLogEndPoint(EditorContentLogEndPoint const&);
    EditorContentLogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorContentLogEndPoint() /*override*/;

    // vIndex: 1
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;

    // vIndex: 2
    virtual bool logOnlyOnce() const /*override*/;

    // vIndex: 2
    virtual void flush() /*override*/;

    // vIndex: 3
    virtual void setEnabled(bool enabled) /*override*/;

    // vIndex: 4
    virtual bool isEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorContentLogEndPoint(
        ::Bedrock::NotNullNonOwnerPtr<::Editor::Services::LoggingService> loggingService
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Editor::Services::LoggingService> loggingService);
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

    MCAPI bool $logOnlyOnce() const;

    MCAPI void $flush();

    MCAPI void $setEnabled(bool enabled);

    MCAPI bool $isEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForLogEndPoint();
    // NOLINTEND
};

} // namespace Editor
