#include "mc/network/packet/AvailableCommandsPacket.h"

std::vector<std::string> AvailableCommandsPacket::getEnumNames() const {
    std::vector<std::string> names;
    names.reserve(mEnums.size());
    for (auto& data : mEnums) {
        names.push_back(data.name);
    }
    return names;
}
std::vector<std::string> AvailableCommandsPacket::getSoftEnumNames() const {
    std::vector<std::string> names;
    names.reserve(mSoftEnums.size());
    for (auto& data : mSoftEnums) {
        names.push_back(data.name);
    }
    return names;
}
std::vector<std::string> AvailableCommandsPacket::getEnumValues(std::string const& name) const {
    std::vector<std::string> values;
    for (auto& data : mEnums) {
        if (data.name == name) {
            for (auto& index : data.valueIndices) {
                values.push_back(mEnumValues.at(index));
            }
            break;
        }
    }
    return values;
}
std::vector<std::string> AvailableCommandsPacket::getSoftEnumValues(std::string const& name) const {
    for (auto& data : mSoftEnums) {
        if (data.name == name)
            return data.values;
    }
    return {};
}