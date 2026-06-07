#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class BoundingBox;
class ChunkPos;
class SimpleBlockVolume;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolumeIterator; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

class RelativeVolumeListBlockVolume : public ::BlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk77850e;
    ::ll::UntypedStorage<4, 12> mUnkfe2614;
    ::ll::UntypedStorage<8, 24> mUnk83c576;
    ::ll::UntypedStorage<4, 4>  mUnk6756a4;
    ::ll::UntypedStorage<4, 4>  mUnkd8738a;
    ::ll::UntypedStorage<4, 16> mUnkbfff20;
    ::ll::UntypedStorage<8, 8>  mUnk89b559;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BoundingBox getBoundingBox() const /*override*/;

    virtual ::BlockPos getMin() const /*override*/;

    virtual ::BlockPos getMax() const /*override*/;

    virtual ::glm::ivec3 getSpan() const /*override*/;

    virtual int getCapacity() const /*override*/;

    virtual bool isInside(::BlockPos const& pos) const /*override*/;

    virtual void translate(::BlockPos const& delta) /*override*/;

    virtual void forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const /*override*/;

    virtual ::std::set<::ChunkPos> getChunks() const /*override*/;

    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelativeVolumeListBlockVolume();

    MCNAPI explicit RelativeVolumeListBlockVolume(::std::optional<::BlockPos> const& origin);

    MCNAPI RelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI RelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI RelativeVolumeListBlockVolume(
        ::std::unordered_set<::BlockPos> const& blockPositions,
        ::std::optional<::BlockPos> const&      origin
    );

    MCNAPI RelativeVolumeListBlockVolume(
        ::std::vector<::Vec3> const&       blockPositions,
        ::std::optional<::BlockPos> const& origin
    );

    MCNAPI RelativeVolumeListBlockVolume(::Vec3 const& pos, ::std::optional<::BlockPos> const& origin);

    MCNAPI RelativeVolumeListBlockVolume(::BlockVolumeBase const& vol, ::std::optional<::BlockPos> const& origin);

    MCNAPI RelativeVolumeListBlockVolume(::SimpleBlockVolume const& volume, ::std::optional<::BlockPos> const& origin);

    MCNAPI void add(::SimpleBlockVolume const& _relativeVolume);

    MCNAPI void add(::std::unordered_set<::BlockPos> const& blockPositions);

    MCNAPI void add(::std::vector<::BlockPos> const& blockPositions);

    MCNAPI void add(::std::vector<::Vec3> const& blockPositions);

    MCNAPI void add(::BlockPos const& pos);

    MCNAPI void add(::Vec3 const& pos);

    MCNAPI void add(::Editor::RelativeVolumeListBlockVolume const& volume);

    MCNAPI ::Editor::RelativeVolumeListBlockVolumeIterator begin() const;

    MCNAPI ::std::vector<::SimpleBlockVolume>
    calculateVolumetricDifference(::SimpleBlockVolume const& volA, ::SimpleBlockVolume const& volB);

    MCNAPI void clear();

    MCNAPI void clearOrigin();

    MCNAPI void enableAdjacencyMap();

    MCNAPI ::Editor::RelativeVolumeListBlockVolumeIterator end() const;

#ifdef LL_PLAT_C
    MCNAPI void forEachRelativeBlockPosition(::std::function<bool(::BlockPos const&)> callback) const;
#endif

    MCNAPI ::std::vector<::BlockPos> getBlockPositionList(bool relative) const;

#ifdef LL_PLAT_C
    MCNAPI uint64 getChangeCount() const;
#endif

    MCNAPI ::std::optional<::BlockPos> getOrigin() const;

    MCNAPI ::std::vector<::Vec3> getVec3PositionList(bool relative) const;

    MCNAPI ::std::vector<::SimpleBlockVolume> const& getVolumeCollection() const;

    MCNAPI int getVolumeCount() const;

    MCNAPI bool hasAdjacent(::BlockPos const& pos, ::BlockPos const& offset) const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isValid() const;

    MCNAPI void moveTo(::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCNAPI bool operator!=(::SimpleBlockVolume const& rhs) const;
#endif

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::BlockPos const& location);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Vec3 const& location);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::std::vector<::BlockPos> const& locations);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::std::vector<::Vec3> const& locations);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::SimpleBlockVolume const& volume);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::BlockVolumeBase const& volumeBase);

    MCNAPI bool operator==(::Editor::RelativeVolumeListBlockVolume const& rhs) const;

    MCNAPI void remove(::std::unordered_set<::BlockPos> const& blockPositions);

    MCNAPI void remove(::std::vector<::BlockPos> const& blockPositions);

    MCNAPI void remove(::std::vector<::Vec3> const& blockPositions);

    MCNAPI void remove(::BlockPos const& pos);

    MCNAPI void remove(::Vec3 const& pos);

    MCNAPI void remove(::SimpleBlockVolume const& relativeVolume);

    MCNAPI void remove(::Editor::RelativeVolumeListBlockVolume const& volume);

    MCNAPI void setOrigin(::BlockPos const& origin);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::optional<::BlockPos> const& origin);

    MCNAPI void* $ctor(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI void* $ctor(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI void*
    $ctor(::std::unordered_set<::BlockPos> const& blockPositions, ::std::optional<::BlockPos> const& origin);

    MCNAPI void* $ctor(::std::vector<::Vec3> const& blockPositions, ::std::optional<::BlockPos> const& origin);

    MCNAPI void* $ctor(::Vec3 const& pos, ::std::optional<::BlockPos> const& origin);

    MCNAPI void* $ctor(::BlockVolumeBase const& vol, ::std::optional<::BlockPos> const& origin);

    MCNAPI void* $ctor(::SimpleBlockVolume const& volume, ::std::optional<::BlockPos> const& origin);
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

    MCNAPI void $forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const;

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
