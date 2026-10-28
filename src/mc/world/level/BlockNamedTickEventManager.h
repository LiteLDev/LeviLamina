#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/ChunkBlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/BlockQueuedNamedTickEvent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BlockType;
class BlockTypeRegistry;
class BoundingBox;
class CompoundTag;
class LevelChunk;
// clang-format on

class BlockNamedTickEventManager {
public:
    // BlockNamedTickEventManager inner types declare
    // clang-format off
    struct EventCompare;
    struct EventWithDelay;
    // clang-format on

    // BlockNamedTickEventManager inner types define
    enum class Result : int {
        Success                       = 0,
        NoEventsHandled               = 1,
        CreationTimeBeforeCurrentTick = 2,
        EmptyNamespace                = 3,
        TooManyEventsAtPosition       = 4,
        NamespaceHashCollision        = 5,
        InvalidEvent                  = 6,
    };

    struct EventCompare {};

    struct EventWithDelay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk734a7f;
        ::ll::UntypedStorage<8, 8>  mUnkbe0e24;
        ::ll::UntypedStorage<8, 32> mUnk6a97f9;
        ::ll::UntypedStorage<8, 32> mUnk838174;
        ::ll::UntypedStorage<8, 8>  mUnk9b29fc;
        // NOLINTEND

    public:
        // prevent constructor by default
        EventWithDelay& operator=(EventWithDelay const&);
        EventWithDelay(EventWithDelay const&);
        EventWithDelay();
    };

    using EventQueue = ::std::multiset<::BlockQueuedNamedTickEvent, ::BlockNamedTickEventManager::EventCompare>;

    using NamespaceMap = ::std::unordered_map<uint, ::std::string>;

    using PositionEvents = ::std::vector<
        ::std::_Tree_const_iterator<::std::_Tree_val<::std::_Tree_simple_types<::BlockQueuedNamedTickEvent>>>>;

    using PositionEventsMap = ::std::unordered_map<
        ::ChunkBlockPos,
        ::std::vector<
            ::std::_Tree_const_iterator<::std::_Tree_val<::std::_Tree_simple_types<::BlockQueuedNamedTickEvent>>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelChunk*> mOwningChunk;
    ::ll::TypedStorage<8, 16, ::std::multiset<::BlockQueuedNamedTickEvent, ::BlockNamedTickEventManager::EventCompare>>
                                                                         mQueue;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::string>> mNamespaceMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ChunkBlockPos,
            ::std::vector<
                ::std::_Tree_const_iterator<::std::_Tree_val<::std::_Tree_simple_types<::BlockQueuedNamedTickEvent>>>>>>
                                     mPositionEvents;
    ::ll::TypedStorage<8, 8, ::Tick> mCurrentTick;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockNamedTickEventManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockNamedTickEventManager(::LevelChunk& owningChunk);

    MCNAPI void _removeFromPositionIndex(
        ::ChunkBlockPos const& chunkBlockPos,
        ::std::_Tree_const_iterator<::std::_Tree_val<::std::_Tree_simple_types<::BlockQueuedNamedTickEvent>>> eventIt
    );

    MCNAPI ::BlockNamedTickEventManager::Result
    add(::ChunkBlockPos    chunkBlockPos,
        ::BlockType const& blockType,
        ::std::string_view nameSpace,
        ::std::string_view eventName,
        ::Tick             creationTime,
        ::Tick             triggerTime);

    MCNAPI void deserialize(::CompoundTag const& tag, ::BlockTypeRegistry const& registry);

    MCNAPI ::std::vector<::BlockNamedTickEventManager::EventWithDelay>
    getEventsInArea(::BoundingBox const& boundingBox, ::Tick const& currentTick) const;

    MCNAPI void remove(::ChunkBlockPos const& chunkBlockPos);

    MCNAPI void remove(::brstd::function_ref<bool(::BlockQueuedNamedTickEvent const&)> removeCondition);

    MCNAPI void
    remove(::ChunkBlockPos const& chunkBlockPos, ::std::string_view nameSpace, ::std::string_view eventName);

    MCNAPI void serialize(::CompoundTag& tag) const;

    MCNAPI ::BlockNamedTickEventManager::Result tick(::BlockSource& region, ::Tick const& until);

    MCNAPI ::std::optional<::BlockQueuedNamedTickEvent>
    tryGet(::ChunkBlockPos const& chunkBlockPos, ::std::string_view nameSpace, ::std::string_view eventName) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelChunk& owningChunk);
    // NOLINTEND
};
