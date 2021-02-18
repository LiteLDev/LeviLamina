#include <lbpch.h>
#include<api\types\types.h>
#include<api\myPacket.h>
#include<stl\varint.h>
#include<mc\Player.h>
LIAPI array_view<WPlayer> WLevel::getUsers() {
	uintptr_t ptr = (uintptr_t)this->v;
	return array_view<WPlayer>(*(WPlayer**)(ptr + 88), *(WPlayer**)(ptr + 96));
}
LIAPI optional<WPlayer> WLevel::getPlayer(string_view name) {
	auto view = getUsers();
	for (auto i : view) {
		if (i.getName() == name)
			return { i };
	}
	return {};
}
LIAPI void WLevel::broadcastText(string_view text, TextType tp) {
	WBStream txtpkws;
	txtpkws.data.reserve(8 + text.size());
	txtpkws.apply((char)tp, (char)0, MCString(text));
	MyPkt<9> pk{ txtpkws.data };
	auto view = getUsers();
	for (auto i : view) {
		i->sendNetworkPacket(pk);
	}
}