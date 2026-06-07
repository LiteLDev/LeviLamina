#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class ClientboundTextureShiftPacket;
namespace TextureShift { struct CollectionState; }
namespace TextureShift { struct ShiftResource; }
namespace mce { struct TextureShiftBuffer; }
// clang-format on

class TextureShiftManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk679b3c;
    ::ll::UntypedStorage<8, 8> mUnkce97e6;
    ::ll::UntypedStorage<8, 8> mUnk3b776c;
    ::ll::UntypedStorage<8, 8> mUnk1a8f3d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureShiftManager& operator=(TextureShiftManager const&);
    TextureShiftManager(TextureShiftManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureShiftManager();

    MCNAPI ::std::vector<::mce::TextureShiftBuffer> const& getShiftBuffer() const;

    MCNAPI void handleTextureShiftPacket(::ClientboundTextureShiftPacket const& packet);

    MCNAPI bool isInitialized() const;

    MCNAPI void onTextureAtlasUpdated();

    MCNAPI bool processShiftBufferUpdates();

    MCNAPI void reset();

    MCNAPI void tickUpdate(float currentTime, uint64 ticksPassed);

    MCNAPI ::std::optional<uint64> tryGetBufferIndex(::std::string const& textureName) const;

    MCNAPI ~TextureShiftManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void validateShiftData(
        ::std::map<::std::string, ::TextureShift::CollectionState> const& collectionStates,
        ::brstd::flat_map<
            ::std::string,
            ::TextureShift::ShiftResource,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::TextureShift::ShiftResource>> const& shiftMaterials
    );
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
