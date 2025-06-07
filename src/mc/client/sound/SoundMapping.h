#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct Sound;
// clang-format on

class SoundMapping {
public:
    // SoundMapping inner types declare
    // clang-format off
    struct ActorInteractiveSounds;
    struct BlockSounds;
    struct EntitySoundList;
    struct EntitySounds;
    struct SoundVariantCompare;
    // clang-format on

    // SoundMapping inner types define
    struct SoundVariantCompare {};

    struct EntitySounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk21d972;
        ::ll::UntypedStorage<8, 56> mUnkba86be;
        ::ll::UntypedStorage<8, 16> mUnk767aee;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntitySounds& operator=(EntitySounds const&);
        EntitySounds(EntitySounds const&);
        EntitySounds();
    };

    struct EntitySoundList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnkf02833;
        ::ll::UntypedStorage<8, 56> mUnkcdbcc8;
        ::ll::UntypedStorage<8, 16> mUnkd58600;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntitySoundList& operator=(EntitySoundList const&);
        EntitySoundList(EntitySoundList const&);
        EntitySoundList();
    };

    struct BlockSounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkf84fb1;
        ::ll::UntypedStorage<8, 32> mUnk6b9906;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockSounds& operator=(BlockSounds const&);
        BlockSounds(BlockSounds const&);
        BlockSounds();
    };

    struct ActorInteractiveSounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk984f05;
        ::ll::UntypedStorage<8, 64> mUnkb3f7c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActorInteractiveSounds& operator=(ActorInteractiveSounds const&);
        ActorInteractiveSounds(ActorInteractiveSounds const&);
        ActorInteractiveSounds();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk4757ed;
    ::ll::UntypedStorage<8, 64>  mUnkf06609;
    ::ll::UntypedStorage<8, 64>  mUnke270f6;
    ::ll::UntypedStorage<8, 64>  mUnk99e455;
    ::ll::UntypedStorage<8, 128> mUnk8962f5;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundMapping& operator=(SoundMapping const&);
    SoundMapping(SoundMapping const&);
    SoundMapping();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SoundMapping() = default;
    // NOLINTEND
};
