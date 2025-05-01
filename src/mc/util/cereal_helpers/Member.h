#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct Member {
public:
    // Member inner types define
    enum class Type : uchar {
        Boolean           = 0,
        Number            = 1,
        String            = 2,
        Object            = 3,
        Array             = 4,
        Vec3              = 5,
        ExpressionNode    = 6,
        IntRange          = 7,
        ItemDescriptor    = 8,
        DefinitionTrigger = 9,
        IdentifierString  = 10,
        Color255rgb       = 11,
        CraftingTags      = 12,
        Brightness        = 13,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk43e167;
    ::ll::UntypedStorage<1, 1>  mUnk64f20d;
    ::ll::UntypedStorage<1, 1>  mUnkebe7f3;
    ::ll::UntypedStorage<4, 8>  mUnkf02687;
    ::ll::UntypedStorage<4, 8>  mUnk49b864;
    ::ll::UntypedStorage<8, 32> mUnka4ad0e;
    // NOLINTEND

public:
    // prevent constructor by default
    Member& operator=(Member const&);
    Member(Member const&);
    Member();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool check(::rapidjson::GenericValue<
                      ::rapidjson::UTF8<char>,
                      ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value) const;

    MCNAPI bool doCheck(::rapidjson::GenericValue<
                        ::rapidjson::UTF8<char>,
                        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value) const;

    MCNAPI ~Member();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CerealHelpers
