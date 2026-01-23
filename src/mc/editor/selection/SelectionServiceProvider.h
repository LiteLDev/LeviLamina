#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor::Selection { class SelectionContainerEntity; }
namespace Editor::Selection { class SelectionContainerVolume; }
// clang-format on

namespace Editor::Services {

class SelectionServiceProvider {
public:
    // SelectionServiceProvider inner types declare
    // clang-format off
    struct ManifestEntry;
    struct ManifestState;
    // clang-format on

    // SelectionServiceProvider inner types define
    struct ManifestEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkc14a1a;
        ::ll::UntypedStorage<8, 8>  mUnkd572a5;
        // NOLINTEND

    public:
        // prevent constructor by default
        ManifestEntry& operator=(ManifestEntry const&);
        ManifestEntry(ManifestEntry const&);
        ManifestEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Editor::Services::SelectionServiceProvider::ManifestEntry&
        operator=(::Editor::Services::SelectionServiceProvider::ManifestEntry&&);

        MCNAPI ~ManifestEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ManifestState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk691cb0;
        ::ll::UntypedStorage<1, 1>  mUnk475da4;
        ::ll::UntypedStorage<4, 4>  mUnk76d733;
        ::ll::UntypedStorage<8, 8>  mUnk42cc6a;
        ::ll::UntypedStorage<8, 8>  mUnk4205c9;
        ::ll::UntypedStorage<8, 24> mUnka5fd40;
        // NOLINTEND

    public:
        // prevent constructor by default
        ManifestState& operator=(ManifestState const&);
        ManifestState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ManifestState(::Editor::Services::SelectionServiceProvider::ManifestState const&);

        MCNAPI ~ManifestState();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Editor::Services::SelectionServiceProvider::ManifestState const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectionServiceProvider() = default;

    virtual ::Editor::Selection::SelectionContainerVolume const& containerVolume() const = 0;

    virtual ::Editor::Selection::SelectionContainerEntity const& containerEntity() const = 0;

    virtual ::Editor::Selection::SelectionContainerVolume& containerVolumeNonConst() = 0;

    virtual ::Editor::Selection::SelectionContainerEntity& containerEntityNonConst() = 0;

    virtual ::WeakRef<::Editor::ProjectRegion> getVolumeRegion() const = 0;

    virtual uint64 generateManifest() = 0;

    virtual uint64 generateManifestWithCallback(
        ::std::function<
            void(::Scripting::Result_deprecated<::Editor::Services::SelectionServiceProvider::ManifestState> const&)>
    ) = 0;

    virtual ::Editor::Services::SelectionServiceProvider::ManifestState const& getCurrentManifest() const = 0;

    virtual void
    deselectBlocksAsync(::std::string const&, ::std::function<void(::Scripting::Result_deprecated<uint64> const&)>) = 0;

    virtual void replaceBlocksAsync(
        ::std::string const&,
        ::std::string const&,
        ::std::function<void(::Scripting::Result_deprecated<uint64> const&)>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
