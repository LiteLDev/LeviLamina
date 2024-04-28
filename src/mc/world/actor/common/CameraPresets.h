#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world//actor/common/CameraPreset.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraPresets {
public:
    // CameraPresets inner types declare
    // clang-format off
    struct CameraList;
    // clang-format on

    // CameraPresets inner types define
    struct CameraList {
    public:
        // prevent constructor by default
        CameraList(CameraList const&);
        CameraList();

    public:
        // NOLINTBEGIN
        // symbol: ??4CameraList@CameraPresets@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct CameraPresets::CameraList& operator=(struct CameraPresets::CameraList const&);

        // symbol: ??1CameraList@CameraPresets@@QEAA@XZ
        MCAPI ~CameraList();

        // symbol: ?bindType@CameraList@CameraPresets@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx&);

        // NOLINTEND
    };

public:
    std::vector<CameraPreset>              mPresets;
    std::vector<CameraPresets::CameraList> mLists;
    cereal::ReflectionCtx&                 mReflectionCtx;

    // prevent constructor by default
    CameraPresets& operator=(CameraPresets const&);
    CameraPresets(CameraPresets const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CameraPresets@@QEAA@XZ
    MCAPI CameraPresets();

    // symbol: ??0CameraPresets@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit CameraPresets(struct cereal::ReflectionCtx&);

    // symbol:
    // ?buildCameraPresetList@CameraPresets@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> buildCameraPresetList() const;

    // symbol:
    // ?getCameraPresetIndex@CameraPresets@@QEBA?AV?$optional@I@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::optional<uint> getCameraPresetIndex(std::string const&) const;

    // symbol: ?getPresets@CameraPresets@@QEBAAEBV?$vector@UCameraPreset@@V?$allocator@UCameraPreset@@@std@@@std@@XZ
    MCAPI std::vector<struct CameraPreset> const& getPresets() const;

    // symbol: ?isEmpty@CameraPresets@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?loadPresets@CameraPresets@@QEAAXAEAVResourcePackManager@@@Z
    MCAPI void loadPresets(class ResourcePackManager& resourcePackManager);

    // symbol: ?write@CameraPresets@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ??1CameraPresets@@QEAA@XZ
    MCAPI ~CameraPresets();

    // symbol:
    // ?isAllowedEaseTarget@CameraPresets@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool isAllowedEaseTarget(std::string const&);

    // symbol:
    // ?read@CameraPresets@@SA?AV?$Result@VCameraPresets@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<class CameraPresets> read(class ReadOnlyBinaryStream&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_discardInvalidPresets@CameraPresets@@AEAAXXZ
    MCAPI void _discardInvalidPresets();

    // symbol:
    // ?_parseAndLoadCameraList@CameraPresets@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@0@Z
    MCAPI void _parseAndLoadCameraList(
        std::string const&      fileData,
        class SemVersion const& engineVersion,
        std::string const&      filename
    );

    // symbol:
    // ?_parseAndLoadCameraPreset@CameraPresets@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@0@Z
    MCAPI void _parseAndLoadCameraPreset(
        std::string const&      fileData,
        class SemVersion const& engineVersion,
        std::string const&      filename
    );

    // symbol:
    // ?_loadJsonFiles@CameraPresets@@CAXAEAVResourcePackManager@@AEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@0@Z@std@@@Z
    MCAPI static void _loadJsonFiles(
        class ResourcePackManager&                                                           resourcePackManager,
        class Core::PathBuffer<class Core::StackString<char, 1024>> const&                   path,
        std::function<void(std::string const&, class SemVersion const&, std::string const&)> callback
    );

    // NOLINTEND
};
