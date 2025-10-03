#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceMode.h"
#include "mc/external/cricket/IceSwitchReason.h"
#include "mc/external/cricket/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
namespace cricket { struct IceConfig; }
// clang-format on

namespace cricket {

class IceControllerInterface {
public:
    // IceControllerInterface inner types declare
    // clang-format off
    struct PingResult;
    struct SwitchResult;
    // clang-format on

    // IceControllerInterface inner types define
    struct SwitchResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkf367f2;
        ::ll::UntypedStorage<4, 12> mUnke2427c;
        ::ll::UntypedStorage<8, 24> mUnk8e65c1;
        // NOLINTEND

    public:
        // prevent constructor by default
        SwitchResult& operator=(SwitchResult const&);
        SwitchResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SwitchResult(::cricket::IceControllerInterface::SwitchResult const&);

        MCNAPI ~SwitchResult();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::cricket::IceControllerInterface::SwitchResult const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PingResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk6c85f3;
        ::ll::UntypedStorage<4, 4>  mUnkce886a;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingResult& operator=(PingResult const&);
        PingResult(PingResult const&);
        PingResult();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceControllerInterface() = default;

    // vIndex: 1
    virtual void SetIceConfig(::cricket::IceConfig const&) = 0;

    // vIndex: 2
    virtual void SetSelectedConnection(::cricket::Connection const*) = 0;

    // vIndex: 3
    virtual void AddConnection(::cricket::Connection const*) = 0;

    // vIndex: 4
    virtual void OnConnectionDestroyed(::cricket::Connection const*) = 0;

    // vIndex: 5
    virtual ::rtc::ArrayView<::cricket::Connection const* const> GetConnections() const;

    // vIndex: 6
    virtual ::rtc::ArrayView<::cricket::Connection const*> connections() const;

    // vIndex: 7
    virtual bool HasPingableConnection() const = 0;

    // vIndex: 8
    virtual ::cricket::IceControllerInterface::PingResult SelectConnectionToPing(int64) = 0;

    // vIndex: 9
    virtual bool
    GetUseCandidateAttr(::cricket::Connection const*, ::cricket::NominationMode, ::cricket::IceMode) const = 0;

    // vIndex: 10
    virtual ::cricket::Connection const* FindNextPingableConnection() = 0;

    // vIndex: 11
    virtual void MarkConnectionPinged(::cricket::Connection const*) = 0;

    // vIndex: 12
    virtual ::cricket::IceControllerInterface::SwitchResult
    ShouldSwitchConnection(::cricket::IceSwitchReason, ::cricket::Connection const*) = 0;

    // vIndex: 13
    virtual ::cricket::IceControllerInterface::SwitchResult SortAndSwitchConnection(::cricket::IceSwitchReason) = 0;

    // vIndex: 14
    virtual ::std::vector<::cricket::Connection const*> PruneConnections() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
