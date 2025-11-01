#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class RenderMaterialInfo : public ::std::enable_shared_from_this<::mce::RenderMaterialInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk7e35a8;
    ::ll::UntypedStorage<8, 8> mUnke9244b;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMaterialInfo& operator=(RenderMaterialInfo const&);
    RenderMaterialInfo(RenderMaterialInfo const&);
    RenderMaterialInfo();

};

}
