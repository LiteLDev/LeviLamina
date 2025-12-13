#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Attribute; }
// clang-format on

namespace mce {

class RenderDeviceBase {
public:
    // RenderDeviceBase inner types declare
    // clang-format off
    struct AttributeList;
    // clang-format on

    // RenderDeviceBase inner types define
    struct AttributeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkfc8a8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        AttributeList& operator=(AttributeList const&);
        AttributeList(AttributeList const&);
        AttributeList();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5933ad;
    ::ll::UntypedStorage<8, 8>  mUnkd2c845;
    ::ll::UntypedStorage<1, 1>  mUnke4e578;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDeviceBase& operator=(RenderDeviceBase const&);
    RenderDeviceBase(RenderDeviceBase const&);
    RenderDeviceBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderDeviceBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
