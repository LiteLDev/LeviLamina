#include "json.h"

class WebToken {
public:
    std::string header;
    Json::Value headerInfo;
    std::string data;
    Json::Value dataInfo;
    std::string signature;
};

static_assert(offsetof(WebToken, dataInfo) == 80);

static_assert(sizeof(WebToken) == 128);