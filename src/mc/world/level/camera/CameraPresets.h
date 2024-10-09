#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world//actor/common/CameraPreset.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/StackString.h"
#include "mc/platform/Result.h"

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
        MCAPI struct CameraPresets::CameraList& operator=(struct CameraPresets::CameraList const&);

        MCAPI ~CameraList();

        MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

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
    MCAPI CameraPresets();

    MCAPI explicit CameraPresets(struct cereal::ReflectionCtx& ctx);

    MCAPI std::vector<std::string> buildCameraPresetList() const;

    MCAPI std::optional<uint> getCameraPresetIndex(std::string const& presetName) const;

    MCAPI std::vector<struct CameraPreset> const& getPresets() const;

    MCAPI bool isEmpty() const;

    MCAPI void loadPresets(class ResourcePackManager& resourcePackManager);

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI ~CameraPresets();

    MCAPI static bool isAllowedEaseTarget(std::string const& easeTarget);

    MCAPI static class Bedrock::Result<class CameraPresets> read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _discardInvalidPresets();

    MCAPI void _parseAndLoadCameraList(
        std::string const&      fileData,
        class SemVersion const& engineVersion,
        std::string const&      filename
    );

    MCAPI void _parseAndLoadCameraPreset(
        std::string const&      fileData,
        class SemVersion const& engineVersion,
        std::string const&      filename
    );

    MCAPI static void _loadJsonFiles(
        class ResourcePackManager&                                                           resourcePackManager,
        class Core::PathBuffer<class Core::StackString<char, 1024>> const&                   path,
        std::function<void(std::string const&, class SemVersion const&, std::string const&)> callback
    );

    // NOLINTEND
};
