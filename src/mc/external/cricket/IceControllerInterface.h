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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceControllerInterface() = default;

    virtual void SetIceConfig(::cricket::IceConfig const&) = 0;

    virtual void SetSelectedConnection(::cricket::Connection const*) = 0;

    virtual void AddConnection(::cricket::Connection const*) = 0;

    virtual void OnConnectionDestroyed(::cricket::Connection const*) = 0;

    virtual ::rtc::ArrayView<::cricket::Connection const* const> GetConnections() const;

    virtual ::rtc::ArrayView<::cricket::Connection const*> connections() const;

    virtual bool HasPingableConnection() const = 0;

    virtual ::cricket::IceControllerInterface::PingResult SelectConnectionToPing(int64) = 0;

    virtual bool
    GetUseCandidateAttr(::cricket::Connection const*, ::cricket::NominationMode, ::cricket::IceMode) const = 0;

    virtual ::cricket::Connection const* FindNextPingableConnection() = 0;

    virtual void MarkConnectionPinged(::cricket::Connection const*) = 0;

    virtual ::cricket::IceControllerInterface::SwitchResult
    ShouldSwitchConnection(::cricket::IceSwitchReason, ::cricket::Connection const*) = 0;

    virtual ::cricket::IceControllerInterface::SwitchResult SortAndSwitchConnection(::cricket::IceSwitchReason) = 0;

    virtual ::std::vector<::cricket::Connection const*> PruneConnections() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
