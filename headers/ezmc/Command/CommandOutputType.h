#pragma once

enum class CommandOutputType {
    Unknown    = 0,
    OnlyResult = 1,
    NoFeedback = 2,
    Normal     = 3,
    WithJson   = 4,
};