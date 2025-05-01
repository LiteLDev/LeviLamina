#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace ClientBlockPipeline {

class Material : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfa608e;
    ::ll::UntypedStorage<8, 88> mUnka4e86b;
    ::ll::UntypedStorage<4, 4>  mUnk98f450;
    ::ll::UntypedStorage<1, 1>  mUnk7f9102;
    ::ll::UntypedStorage<1, 1>  mUnkf68e6c;
    ::ll::UntypedStorage<1, 1>  mUnk90df22;
    // NOLINTEND

public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Material() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ClientBlockPipeline
