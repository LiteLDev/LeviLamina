#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct ModelAsset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk932d09;
    ::ll::UntypedStorage<8, 32> mUnk5e1c7d;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelAsset& operator=(ModelAsset const&);
    ModelAsset(ModelAsset const&);
    ModelAsset();
};

} // namespace Editor::Mesh
