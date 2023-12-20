#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/MediaProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ContentGroup; }
namespace cricket { class ContentInfo; }
namespace cricket { class MediaContentDescription; }
namespace cricket { struct TransportInfo; }
// clang-format on

namespace cricket {

class SessionDescription {
public:
    // prevent constructor by default
    SessionDescription& operator=(SessionDescription const&);

public:
    // NOLINTBEGIN
    // symbol: ?AddContent@SessionDescription@cricket@@QEAAX$$QEAVContentInfo@2@@Z
    MCAPI void AddContent(class cricket::ContentInfo&&);

    // symbol:
    // ?AddContent@SessionDescription@cricket@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MediaProtocolType@2@_NV?$unique_ptr@VMediaContentDescription@cricket@@U?$default_delete@VMediaContentDescription@cricket@@@std@@@4@@Z
    MCAPI void
    AddContent(std::string const&, ::cricket::MediaProtocolType, bool, std::unique_ptr<class cricket::MediaContentDescription>);

    // symbol:
    // ?AddContent@SessionDescription@cricket@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MediaProtocolType@2@_N2V?$unique_ptr@VMediaContentDescription@cricket@@U?$default_delete@VMediaContentDescription@cricket@@@std@@@4@@Z
    MCAPI void
    AddContent(std::string const&, ::cricket::MediaProtocolType, bool, bool, std::unique_ptr<class cricket::MediaContentDescription>);

    // symbol: ?AddTransportInfo@SessionDescription@cricket@@QEAAXAEBUTransportInfo@2@@Z
    MCAPI void AddTransportInfo(struct cricket::TransportInfo const&);

    // symbol:
    // ?Clone@SessionDescription@cricket@@QEBA?AV?$unique_ptr@VSessionDescription@cricket@@U?$default_delete@VSessionDescription@cricket@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class cricket::SessionDescription> Clone() const;

    // symbol:
    // ?GetContentByName@SessionDescription@cricket@@QEAAPEAVContentInfo@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::ContentInfo* GetContentByName(std::string const&);

    // symbol:
    // ?GetContentByName@SessionDescription@cricket@@QEBAPEBVContentInfo@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::ContentInfo const* GetContentByName(std::string const&) const;

    // symbol:
    // ?GetContentDescriptionByName@SessionDescription@cricket@@QEBAPEBVMediaContentDescription@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::MediaContentDescription const* GetContentDescriptionByName(std::string const&) const;

    // symbol:
    // ?GetGroupsByName@SessionDescription@cricket@@QEBA?AV?$vector@PEBVContentGroup@cricket@@V?$allocator@PEBVContentGroup@cricket@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::vector<class cricket::ContentGroup const*> GetGroupsByName(std::string const&) const;

    // symbol:
    // ?GetTransportInfoByName@SessionDescription@cricket@@QEAAPEAUTransportInfo@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct cricket::TransportInfo* GetTransportInfoByName(std::string const&);

    // symbol:
    // ?GetTransportInfoByName@SessionDescription@cricket@@QEBAPEBUTransportInfo@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct cricket::TransportInfo const* GetTransportInfoByName(std::string const&) const;

    // symbol:
    // ?HasGroup@SessionDescription@cricket@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool HasGroup(std::string const&) const;

    // symbol: ??0SessionDescription@cricket@@QEAA@XZ
    MCAPI SessionDescription();

    // symbol: ?set_extmap_allow_mixed@SessionDescription@cricket@@QEAAX_N@Z
    MCAPI void set_extmap_allow_mixed(bool);

    // symbol: ??1SessionDescription@cricket@@QEAA@XZ
    MCAPI ~SessionDescription();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0SessionDescription@cricket@@AEAA@AEBV01@@Z
    MCAPI SessionDescription(class cricket::SessionDescription const&);

    // NOLINTEND
};

}; // namespace cricket
