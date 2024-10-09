#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/diagnostics/LogAreaID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class StaticOptimizedString; }
// clang-format on

class ContentLog : Bedrock::EnableNonOwnerReferences {
public:
    // ContentLog inner types declare
    // clang-format off
    class ContentLogEndPointData;
    class ContentLogScope;
    class ThreadSpecificData;
    // clang-format on

    // ContentLog inner types define
    class ContentLogEndPointData {
    public:
        // prevent constructor by default
        ContentLogEndPointData& operator=(ContentLogEndPointData const&);
        ContentLogEndPointData(ContentLogEndPointData const&);
        ContentLogEndPointData();

    public:
        // NOLINTBEGIN
        MCAPI explicit ContentLogEndPointData(gsl::not_null<class ContentLogEndPoint*> contentLogEndPoint);

        // NOLINTEND
    };

    class ContentLogScope {
    public:
        // prevent constructor by default
        ContentLogScope& operator=(ContentLogScope const&);
        ContentLogScope(ContentLogScope const&);
        ContentLogScope();

    public:
        // NOLINTBEGIN
        MCAPI explicit ContentLogScope(class Bedrock::StaticOptimizedString scope);

        MCAPI ~ContentLogScope();

        // NOLINTEND
    };

    class ThreadSpecificData {
    public:
        // prevent constructor by default
        ThreadSpecificData& operator=(ThreadSpecificData const&);
        ThreadSpecificData(ThreadSpecificData const&);
        ThreadSpecificData();
    };

public:
    // prevent constructor by default
    ContentLog& operator=(ContentLog const&);
    ContentLog(ContentLog const&);

    bool mEnabled; // this+0x18

    // map this+0x90

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContentLog() = default;

    MCAPI ContentLog();

    MCAPI std::string getScope();

    MCAPI bool isEnabled() const;

    MCAPI void log(bool, ::LogLevel, ::LogArea, ...);

    MCAPI void unregisterEndPoint(gsl::not_null<class ContentLogEndPoint*> endPoint);

    MCAPI void updateEnabledStatus();

    MCAPI static ::LogAreaID const getBedrockLogAreaFromContentLogArea(::LogArea contentLogArea);

    MCAPI static char const* getLogAreaName(::LogArea area);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _writeToLog(bool, ::LogArea, ::LogLevel, char*&);

    // NOLINTEND
};
