#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class BoundingBox;
class ChunkPos;
class SimpleBlockVolume;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

class RelativeVolumeListBlockVolume : public ::BlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk77850e;
    ::ll::UntypedStorage<4, 12> mUnkfe2614;
    ::ll::UntypedStorage<8, 24> mUnk942c8a;
    ::ll::UntypedStorage<4, 4>  mUnk6756a4;
    ::ll::UntypedStorage<4, 4>  mUnkd8738a;
    ::ll::UntypedStorage<4, 16> mUnkbfff20;
    ::ll::UntypedStorage<8, 8>  mUnkba4444;
    // NOLINTEND

public:
    // prevent constructor by default
    RelativeVolumeListBlockVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BoundingBox getBoundingBox() const /*override*/;

    // vIndex: 2
    virtual ::BlockPos getMin() const /*override*/;

    // vIndex: 3
    virtual ::BlockPos getMax() const /*override*/;

    // vIndex: 4
    virtual ::glm::ivec3 getSpan() const /*override*/;

    // vIndex: 5
    virtual int getCapacity() const /*override*/;

    // vIndex: 6
    virtual bool isInside(::BlockPos const& pos) const /*override*/;

    // vIndex: 7
    virtual void translate(::BlockPos const& delta) /*override*/;

    // vIndex: 8
    virtual void forEach(::std::function<bool(::BlockPos const&)> callback) const /*override*/;

    // vIndex: 9
    virtual ::std::set<::ChunkPos> getChunks() const /*override*/;

    // vIndex: 10
    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const /*override*/;

    // vIndex: 11
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const /*override*/;

    // vIndex: 0
    virtual ~RelativeVolumeListBlockVolume() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI RelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI RelativeVolumeListBlockVolume(
        ::std::vector<::Vec3> const&       blockPositions,
        ::std::optional<::BlockPos> const& origin
    );

    MCNAPI void add(::SimpleBlockVolume const& _relativeVolume);

    MCNAPI void add(::std::vector<::Vec3> const& blockPositions);

    MCNAPI void add(::Vec3 const& pos);

    MCNAPI ::std::vector<::SimpleBlockVolume>
    calculateVolumetricDifference(::SimpleBlockVolume const& volA, ::SimpleBlockVolume const& volB);

    MCNAPI void clear();

    MCNAPI void enableAdjacencyMap();

    MCNAPI ::std::vector<::BlockPos> getBlockPositionList(bool relative) const;

    MCNAPI bool hasAdjacent(::BlockPos const& pos, ::BlockPos const& offset) const;

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Vec3 const& location);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::std::vector<::Vec3> const& locations);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI bool operator==(::Editor::RelativeVolumeListBlockVolume const& rhs) const;

    MCNAPI void remove(::std::vector<::Vec3> const& blockPositions);

    MCNAPI void remove(::Vec3 const& pos);

    MCNAPI void remove(::SimpleBlockVolume const& relativeVolume);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI void* $ctor(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI void* $ctor(::std::vector<::Vec3> const& blockPositions, ::std::optional<::BlockPos> const& origin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BoundingBox $getBoundingBox() const;

    MCNAPI ::BlockPos $getMin() const;

    MCNAPI ::BlockPos $getMax() const;

    MCNAPI ::glm::ivec3 $getSpan() const;

    MCNAPI int $getCapacity() const;

    MCNAPI bool $isInside(::BlockPos const& pos) const;

    MCNAPI void $translate(::BlockPos const& delta);

    MCNAPI void $forEach(::std::function<bool(::BlockPos const&)> callback) const;

    MCNAPI ::std::set<::ChunkPos> $getChunks() const;

    MCNAPI ::std::unordered_set<::BlockPos> $getFlattenedBlockPositions() const;

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $getIterator() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor
