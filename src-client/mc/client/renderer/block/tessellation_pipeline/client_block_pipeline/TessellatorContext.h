#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class LevelRenderer;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

namespace ClientBlockPipeline {

class TessellatorContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository>>
                                   mSchematicsRepo;
    ::ll::TypedStorage<1, 1, bool> mTextureShiftsEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    TessellatorContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TessellatorContext(::IMinecraftGame const& game);

    MCAPI explicit TessellatorContext(::LevelRenderer const& levelRenderer);

    MCAPI ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> getMaterialRepository() const;

    MCAPI ~TessellatorContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftGame const& game);

    MCAPI void* $ctor(::LevelRenderer const& levelRenderer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
