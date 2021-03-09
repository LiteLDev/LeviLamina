#include "pch.h"

void updateCheck() {
	std::thread t([] {
		httplib::Client cli("http://u.sakuralo.top:43199");
		auto res = cli.Get("/version");
		cli.set_connection_timeout(0, 300000);
		rapidjson::Document json;
		if (res) {
			json.Parse(res->body.c_str());
			if (json.HasParseError()) {
				std::cout << "[BDSLiteloader] Failed to get updates(1)\n";
				return;
			}
			auto arr = json.GetArray();
			std::string LatestRelease = arr[arr.Size() - 1]["name"].GetString();
			//std::string LatestMessage = arr[arr.Size() - 1]["message"].GetString();
			int latestVersionNum = arr[arr.Size() - 1]["versionNum"].GetInt();
			if (latestVersionNum < LiteLoaderVersionNum) {
				std::cout << "[BDSLiteloader] Found a new version: " << LatestRelease << "\n";
			}
		}
		else
		{
			std::cout << "[BDSLiteloader] Failed to get updates(0)\n";
		}
		});
	t.detach();
}