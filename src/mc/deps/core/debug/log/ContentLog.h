#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated inclusion list
#include "mc/enums/LogArea.h"
#include "mc/enums/LogAreaID.h"
#include "mc/enums/LogLevel.h"

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
        // symbol: ??0ContentLogEndPointData@ContentLog@@QEAA@V?$not_null@PEAVContentLogEndPoint@@@gsl@@@Z
        MCAPI explicit ContentLogEndPointData(gsl::not_null<class ContentLogEndPoint*>);

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
        // symbol: ??0ContentLogScope@ContentLog@@QEAA@VStaticOptimizedString@Bedrock@@@Z
        MCAPI explicit ContentLogScope(class Bedrock::StaticOptimizedString);

        // symbol: ??1ContentLogScope@ContentLog@@QEAA@XZ
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
    // vIndex: 0, symbol: __gen_??1ContentLog@@UEAA@XZ
    virtual ~ContentLog() = default;

    // symbol: ??0ContentLog@@QEAA@XZ
    MCAPI ContentLog();

    // symbol: ?getScope@ContentLog@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getScope();

    // symbol: ?isEnabled@ContentLog@@QEBA_NXZ
    MCAPI bool isEnabled() const;

    // symbol: ?log@ContentLog@@QEAAX_NW4LogLevel@@W4LogArea@@ZZ
    MCAPI void log(bool, ::LogLevel, ::LogArea, ...);

    // symbol: ?updateEnabledStatus@ContentLog@@QEAAXXZ
    MCAPI void updateEnabledStatus();

    // symbol: ?getBedrockLogAreaFromContentLogArea@ContentLog@@SA?BW4LogAreaID@@W4LogArea@@@Z
    MCAPI static ::LogAreaID const getBedrockLogAreaFromContentLogArea(::LogArea contentLogArea);

    // symbol: ?getLogAreaName@ContentLog@@SAPEBDW4LogArea@@@Z
    MCAPI static char const* getLogAreaName(::LogArea area);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_writeToLog@ContentLog@@AEAAX_NW4LogArea@@W4LogLevel@@AEAPEAD@Z
    MCAPI void _writeToLog(bool, ::LogArea, ::LogLevel, char*&);

    // NOLINTEND
};
