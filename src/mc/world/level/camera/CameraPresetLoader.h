#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace SharedTypes::v1_21_90 { struct CameraPresetFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraPresetLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk2ad549;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetLoader& operator=(CameraPresetLoader const&);
    CameraPresetLoader(CameraPresetLoader const&);
    CameraPresetLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraPresetLoader(::MolangVersion molangVersion, ::cereal::ReflectionCtx const& ctx);

    MCNAPI ::Puv::LoadResult<::SharedTypes::v1_21_90::CameraPresetFile>
    load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCNAPI ~CameraPresetLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangVersion molangVersion, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
