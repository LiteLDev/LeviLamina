#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class Motif {
public:
    // Motif inner types declare
    // clang-format off
    class Registry;
    // clang-format on

    // Motif inner types define
    class Registry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::Motif const*>> mMotifs;
        ::ll::TypedStorage<8, 24, ::std::vector<::Motif const*>> mSplitMeshMotifs;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ::Motif const& getMotifByName(::std::string const& name) const;
#endif

        MCAPI void init(::BaseGameVersion const& baseGameVersion);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mName;
    ::ll::TypedStorage<4, 4, int const>            mWidth;
    ::ll::TypedStorage<4, 4, int const>            mHeight;
    ::ll::TypedStorage<4, 16, ::glm::vec4 const>   mUVs;
    ::ll::TypedStorage<1, 1, bool const>           mIsPublic;
    ::ll::TypedStorage<1, 1, bool const>           mIsSplitMeshPainting;
    // NOLINTEND

public:
    // prevent constructor by default
    Motif();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Motif(::std::string name, int w, int h, ::glm::vec4 UVs, bool isPublic, bool isSplitMeshPainting);

    MCFOLD ::std::string const getName() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND
};
