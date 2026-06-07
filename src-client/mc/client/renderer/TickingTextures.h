#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FlipbookTexture;
class FrameUpdateContext;
// clang-format on

class TickingTextures {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc30a11;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingTextures& operator=(TickingTextures const&);
    TickingTextures(TickingTextures const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickingTextures();

    MCNAPI void addTickingTexture(::std::unique_ptr<::FlipbookTexture>&& tickingTexture);

    MCNAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCNAPI ::FlipbookTexture const* getTickingTexture(uint64 index) const;

    MCNAPI uint64 getTickingTextureCount() const;

    MCNAPI void reloadAll();

    MCNAPI void removeTickingTextures();

    MCNAPI void unloadAll();

    MCNAPI void update();

    MCNAPI ~TickingTextures();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
