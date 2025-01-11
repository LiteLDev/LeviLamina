#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class BannerPatternItem : public ::Item {
public:
    // BannerPatternItem inner types define
    enum class Type : int {
        CreeperCharge   = 0,
        SkullCharge     = 1,
        FlowerCharge    = 2,
        Thing           = 3,
        FieldMasoned    = 4,
        BordureIndented = 5,
        Snout           = 6,
        Globe           = 7,
        Flow            = 8,
        Guster          = 9,
        Count           = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerPatternItem::Type> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 40
    virtual bool isPattern() const /*override*/;

    // vIndex: 41
    virtual int getPatternIndex() const /*override*/;

    // vIndex: 0
    virtual ~BannerPatternItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerPatternItem(::std::string const& name, int id, ::BannerPatternItem::Type type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::BannerPatternItem::Type type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isPattern() const;

    MCFOLD int $getPatternIndex() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
