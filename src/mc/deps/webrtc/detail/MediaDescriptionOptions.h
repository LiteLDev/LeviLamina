#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SimulcastLayerList; }
namespace cricket { struct RidDescription; }
// clang-format on

namespace cricket {

struct MediaDescriptionOptions {
public:
    // prevent constructor by default
    MediaDescriptionOptions& operator=(MediaDescriptionOptions const&);
    MediaDescriptionOptions();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AddAudioSender@MediaDescriptionOptions@cricket@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI void AddAudioSender(std::string const&, std::vector<std::string> const&);

    // symbol:
    // ?AddVideoSender@MediaDescriptionOptions@cricket@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@AEBV?$vector@URidDescription@cricket@@V?$allocator@URidDescription@cricket@@@std@@@4@AEBVSimulcastLayerList@2@H@Z
    MCAPI void AddVideoSender(
        std::string const&,
        std::vector<std::string> const&,
        std::vector<struct cricket::RidDescription> const&,
        class cricket::SimulcastLayerList const&,
        int
    );

    // symbol: ??0MediaDescriptionOptions@cricket@@QEAA@$$QEAU01@@Z
    MCAPI MediaDescriptionOptions(struct cricket::MediaDescriptionOptions&&);

    // symbol: ??0MediaDescriptionOptions@cricket@@QEAA@AEBU01@@Z
    MCAPI MediaDescriptionOptions(struct cricket::MediaDescriptionOptions const&);

    // symbol: ??1MediaDescriptionOptions@cricket@@QEAA@XZ
    MCAPI ~MediaDescriptionOptions();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddSenderInternal@MediaDescriptionOptions@cricket@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@AEBV?$vector@URidDescription@cricket@@V?$allocator@URidDescription@cricket@@@std@@@4@AEBVSimulcastLayerList@2@H@Z
    MCAPI void AddSenderInternal(
        std::string const&,
        std::vector<std::string> const&,
        std::vector<struct cricket::RidDescription> const&,
        class cricket::SimulcastLayerList const&,
        int
    );

    // NOLINTEND
};

}; // namespace cricket
