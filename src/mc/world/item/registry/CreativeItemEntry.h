#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
class ItemInstance;
struct CreativeItemNetIdTag;
// clang-format on

class CreativeItemEntry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnka74dfe;
    ::ll::UntypedStorage<4, 4>   mUnkb16da3;
    ::ll::UntypedStorage<4, 4>   mUnk812d45;
    ::ll::UntypedStorage<8, 128> mUnka8ccac;
    ::ll::UntypedStorage<4, 4>   mUnkde9665;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemEntry& operator=(CreativeItemEntry const&);
    CreativeItemEntry(CreativeItemEntry const&);
    CreativeItemEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeItemEntry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CreativeItemNetId const& getCreativeNetId() const;

    MCAPI ::CreativeGroupInfo* getGroup() const;

    MCAPI uint getIndex() const;

    MCAPI ::ItemInstance const& getItemInstance() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
