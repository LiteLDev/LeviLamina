#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
class HashedString;
// clang-format on

namespace CameraAimAssist {

class PriorityCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd667eb;
    ::ll::UntypedStorage<4, 4>  mUnka75f28;
    ::ll::UntypedStorage<4, 4>  mUnkdc7df4;
    ::ll::UntypedStorage<8, 64> mUnk744b9a;
    ::ll::UntypedStorage<8, 64> mUnkc8f11d;
    ::ll::UntypedStorage<8, 64> mUnkfc0133;
    ::ll::UntypedStorage<8, 64> mUnk8ec1d7;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PriorityCategory& operator=(PriorityCategory const&);

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PriorityCategory();

    MCNAPI PriorityCategory(::CameraAimAssist::PriorityCategory const&);

    MCNAPI PriorityCategory(
        ::HashedString const&                            id,
        int                                              defaultBlockPriority,
        ::std::unordered_map<::HashedString, int> const& blockPriority,
        int                                              defaultEntityPriority,
        ::std::unordered_map<::HashedString, int> const& entityPriority,
        ::std::unordered_map<::HashedString, int> const& blockTagPriority,
        ::std::unordered_map<::HashedString, int> const& entityTypeFamilyPriority
    );

#ifdef LL_PLAT_C
    MCNAPI int getBlockPriority(::BlockType const& block) const;
#endif

    MCNAPI int getEntityPriority(::Actor const& entity) const;

    MCNAPI ::HashedString const& getId() const;

    MCNAPI ::CameraAimAssist::PriorityCategory& operator=(::CameraAimAssist::PriorityCategory&&);

#ifdef LL_PLAT_C
    MCNAPI ::CameraAimAssist::PriorityCategory& operator=(::CameraAimAssist::PriorityCategory const&);
#endif

    MCNAPI ~PriorityCategory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CameraAimAssist::PriorityCategory const& NO_PRIORITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::CameraAimAssist::PriorityCategory const&);

    MCNAPI void* $ctor(
        ::HashedString const&                            id,
        int                                              defaultBlockPriority,
        ::std::unordered_map<::HashedString, int> const& blockPriority,
        int                                              defaultEntityPriority,
        ::std::unordered_map<::HashedString, int> const& entityPriority,
        ::std::unordered_map<::HashedString, int> const& blockTagPriority,
        ::std::unordered_map<::HashedString, int> const& entityTypeFamilyPriority
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraAimAssist
