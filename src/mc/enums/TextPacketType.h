#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TextPacketType : uchar {
    Raw                    = 0x0,
    Chat                   = 0x1,
    Translate              = 0x2,
    Popup                  = 0x3,
    JukeboxPopup           = 0x4,
    Tip                    = 0x5,
    SystemMessage          = 0x6,
    Whisper                = 0x7,
    Announcement           = 0x8,
    TextObjectWhisper      = 0x9,
    TextObject             = 0xA,
    TextObjectAnnouncement = 0xB,
};
