#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/sound/EventToSoundListMap.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class LinkedAssetValidator;
class Random;
struct Sound;
namespace Json { class Value; }
// clang-format on

class SoundMapping {
public:
    // SoundMapping inner types declare
    // clang-format off
    struct SoundVariantCompare;
    struct EntitySounds;
    struct EntitySoundList;
    struct BlockSounds;
    struct ActorInteractiveSounds;
    // clang-format on

    // SoundMapping inner types define
    struct SoundVariantCompare {
    public:
        // SoundVariantCompare inner types define
        using is_transparent = void;
    };

    struct EntitySounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::Sound>> mBaseSounds;
        ::ll::TypedStorage<
            8,
            48,
            ::brstd::flat_map<
                ::HashedString,
                ::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::Sound>,
                ::SoundMapping::SoundVariantCompare,
                ::std::vector<::HashedString>,
                ::std::vector<::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::Sound>>>>
                                                    mVariantSounds;
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mVariantKey;
        // NOLINTEND
    };

    struct EntitySoundList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::EventToSoundListMap> mBaseSounds;
        ::ll::TypedStorage<
            8,
            48,
            ::brstd::flat_map<
                ::HashedString,
                ::EventToSoundListMap,
                ::SoundMapping::SoundVariantCompare,
                ::std::vector<::HashedString>,
                ::std::vector<::EventToSoundListMap>>>
                                                    mVariantSounds;
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mVariantKey;
        // NOLINTEND
    };

    struct BlockSounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::Sound>> mSounds;
        ::ll::TypedStorage<8, 32, ::std::string>                                                         mBaseBlock;
        // NOLINTEND
    };

    struct ActorInteractiveSounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SoundMapping::BlockSounds>> mDefaultBlockSounds;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SoundMapping::EntitySoundList>>
            mEntitySoundLists;
        // NOLINTEND
    };

    using EventSoundMap = ::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::Sound>;

    using NamedSoundMap = ::std::unordered_map<::HashedString, ::Sound>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::Sound>> mEventSounds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::Sound>>                         mNamedSounds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SoundMapping::EntitySounds>>     mEntitySounds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SoundMapping::BlockSounds>>      mBlockSounds;
    ::ll::TypedStorage<8, 128, ::SoundMapping::ActorInteractiveSounds> mEntityInteractiveSounds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundMapping() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Sound const& _getBlockSound(
        ::std::unordered_map<::std::string, ::SoundMapping::BlockSounds> const& blockSounds,
        ::SharedTypes::Legacy::LevelSoundEvent                                  eventType,
        ::std::string const&                                                    blockType
    ) const;

    MCAPI void _loadSounds(::Json::Value const& json, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

    MCAPI ::Sound const& getEntitySound(
        ::SharedTypes::Legacy::LevelSoundEvent eventType,
        ::ActorSoundIdentifier const&          actorSoundIdentifier
    ) const;

    MCAPI ::Sound const& getEventSound(::SharedTypes::Legacy::LevelSoundEvent eventType) const;

    MCAPI ::Sound const& getNamedSound(::HashedString const& name) const;

    MCAPI ::Sound getSound(
        ::SharedTypes::Legacy::LevelSoundEvent eventType,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        ::std::string const&                   blockType,
        ::Random&                              rand
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _loadBlockSounds(
        ::Json::Value const&                                              root,
        ::std::unordered_map<::std::string, ::SoundMapping::BlockSounds>& blockSoundList
    );

    MCAPI static void _loadEntityInteractiveSounds(
        ::Json::Value const&                                                  root,
        ::std::unordered_map<::std::string, ::SoundMapping::BlockSounds>&     blockSounds,
        ::std::unordered_map<::std::string, ::SoundMapping::EntitySoundList>& entitySoundLists
    );

    MCAPI static void _loadEventSounds(
        ::Json::Value const&                                                   root,
        ::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::Sound>& eventSoundMap,
        bool                                                                   allowEmpty
    );
    // NOLINTEND
};
