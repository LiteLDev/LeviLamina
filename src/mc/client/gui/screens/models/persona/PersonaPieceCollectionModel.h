#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

class PersonaPieceCollectionModel {
public:
    // PersonaPieceCollectionModel inner types define
    enum class RetrievalType : int {
        DressingRoomMainFeatured = 0,
        FeaturedCategory         = 1,
        FeaturedSubCategory      = 2,
        ProfileScreen            = 3,
        SubCategory              = 4,
        Achievements             = 5,
        SkinPack                 = 6,
        Emotes                   = 7,
        Capes                    = 8,
        CustomCollector          = 9,
        Unknown                  = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkfbbc0c;
    ::ll::UntypedStorage<4, 4>   mUnk4e132c;
    ::ll::UntypedStorage<4, 4>   mUnkcb3654;
    ::ll::UntypedStorage<4, 4>   mUnkd5f5a6;
    ::ll::UntypedStorage<4, 4>   mUnka765a8;
    ::ll::UntypedStorage<8, 152> mUnka67e9c;
    ::ll::UntypedStorage<8, 152> mUnkfa0297;
    ::ll::UntypedStorage<8, 152> mUnk9a5e69;
    ::ll::UntypedStorage<8, 16>  mUnk3a7d12;
    ::ll::UntypedStorage<8, 16>  mUnkf78cc8;
    ::ll::UntypedStorage<8, 24>  mUnk9e3d57;
    ::ll::UntypedStorage<8, 24>  mUnk998109;
    ::ll::UntypedStorage<8, 8>   mUnkfe05d4;
    ::ll::UntypedStorage<8, 8>   mUnk96cec5;
    ::ll::UntypedStorage<8, 24>  mUnk4f0bc9;
    ::ll::UntypedStorage<8, 16>  mUnkb8ce72;
    ::ll::UntypedStorage<8, 152> mUnkb603fd;
    ::ll::UntypedStorage<8, 152> mUnk1690a1;
    ::ll::UntypedStorage<8, 48>  mUnk36f258;
    ::ll::UntypedStorage<8, 16>  mUnkbcde81;
    ::ll::UntypedStorage<8, 24>  mUnkec98b5;
    ::ll::UntypedStorage<8, 24>  mUnkb008a9;
    ::ll::UntypedStorage<8, 64>  mUnk8e19ae;
    ::ll::UntypedStorage<8, 16>  mUnk1e48b1;
    ::ll::UntypedStorage<8, 24>  mUnk46e36f;
    ::ll::UntypedStorage<8, 8>   mUnkb10968;
    ::ll::UntypedStorage<8, 16>  mUnk1f898a;
    ::ll::UntypedStorage<8, 16>  mUnk863a32;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaPieceCollectionModel& operator=(PersonaPieceCollectionModel const&);
    PersonaPieceCollectionModel(PersonaPieceCollectionModel const&);
    PersonaPieceCollectionModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PersonaPieceCollectionModel() = default;
    // NOLINTEND
};

} // namespace persona
