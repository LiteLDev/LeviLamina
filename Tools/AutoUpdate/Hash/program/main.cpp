/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2018 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#include "../blake1_224.h"
#include "../blake1_256.h"
#include "../blake1_384.h"
#include "../blake1_512.h"
#include "../blake2.h"
#include "../blake2s.h"
#include "../cshake.h"
#include "../crc_32.h"
#include "../has_160.h"
#include "../md2.h"
#include "../md4.h"
#include "../md5.h"
#include "../ripemd_128.h"
#include "../ripemd_160.h"
#include "../ripemd_256.h"
#include "../ripemd_320.h"
#include "../sha1.h"
#include "../sha2_224.h"
#include "../sha2_256.h"
#include "../sha2_384.h"
#include "../sha2_512.h"
#include "../sha2_512_224.h"
#include "../sha2_512_256.h"
#include "../sha3.h"
#include "../sm3.h"
#include "../tiger.h"
#include "../tuple_hash.h"
#include "../whirlpool.h"

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>


#define ARRAY_LENGTH(a) (static_cast<int>(std::extent<decltype(a)>::value))


enum class Hash : int
{
	Blake1_224, Blake1_256, Blake1_384, Blake1_512,
	Blake2, Blake2s,
	Crc_32,
	Cshake_128, Cshake_256,
	Has160,
	Md2, Md4, Md5,
	Ripemd_128, Ripemd_160, Ripemd_256, Ripemd_320,
	Sha1,
	Sha2_224, Sha2_256, Sha2_384, Sha2_512,
	Sha2_512_224, Sha2_512_256,
	Sha3_224, Sha3_256, Sha3_384, Sha3_512,
	Shake_128, Shake_256,
	Sm3,
	Tiger1_128, Tiger1_160, Tiger1_192,
	Tiger2_128, Tiger2_160, Tiger2_192,
	Tuple_hash_128, Tuple_hash_256,
	Whirlpool,
	Invalid,
};


static void printUsage(const std::string &name);
static Hash getHash(const std::string &hash);
static bool runHash(const Hash hash, const int argc, const char *argv[]);


int main(const int argc, const char *argv[])
{
	const auto goToFail = [&argv](const bool failPred) -> void
	{
		if (failPred)
		{
			printUsage(argv[0]);
			exit(0);
		}
	};

	goToFail(argc <= 1);

	const Hash hash = getHash(argv[1]);

	const bool ret = runHash(hash, argc, argv);
	goToFail(!ret);

	return 0;
}

void printUsage(const std::string &name)
{
	printf("Usage: %s <HASH> <FILE | - (stdin)>\n", name.c_str());
	printf("  https://github.com/Chocobo1/Hash \n");
	printf(
		"\n"
		"Available HASH:\n"
		"  -blake1-224"		"\t -blake1-256"	"\t -blake1-384"	"\t -blake1-512\n"
		"  -blake2"			"\t -blake2s\n"
		"  -crc-32\n"
		"  -cshake-128 <Digest length (bytes)> <Customization string>\n"
		"  -cshake-256 <Digest length (bytes)> <Customization string>\n"
		"  -has160\n"
		"  -md2"			"\t\t -md4"			"\t\t -md5\n"
		"  -ripemd-128"		"\t -ripemd-160"	"\t -ripemd-256"	"\t -ripemd-320\n"
		"  -sha1\n"
		"  -sha2-224"		"\t -sha2-256"		"\t -sha2-384"		"\t -sha2-512"		"\t -sha2-512-224"	"\t -sha2-512-256\n"
		"  -sha3-224"		"\t -sha3-256"		"\t -sha3-384"		"\t -sha3-512\n"
		"  -shake-128 <Digest length (bytes)>\n"
		"  -shake-256 <Digest length (bytes)>\n"
		"  -sm3\n"
		"  -tiger1-128"		"\t -tiger1-160"	"\t -tiger1-192\n"
		"  -tiger2-128"		"\t -tiger2-160"	"\t -tiger2-192\n"
		"  -tuple-hash-128 <Digest length (bytes)> <Customization string>\n"
		"  -tuple-hash-256 <Digest length (bytes)> <Customization string>\n"
		"  -whirlpool\n"
	);
}

Hash getHash(const std::string &hash)
{
	static const std::string names[] = {
		"-blake1-224", "-blake1-256", "-blake1-384", "-blake1-512",
		"-blake2", "-blake2s",
		"-crc-32",
		"-cshake-128", "-cshake-256",
		"-has160",
		"-md2", "-md4", "-md5",
		"-ripemd-128", "-ripemd-160", "-ripemd-256", "-ripemd-320",
		"-sha1",
		"-sha2-224", "-sha2-256", "-sha2-384", "-sha2-512",
		"-sha2-512-224", "-sha2-512-256",
		"-sha3-224", "-sha3-256", "-sha3-384", "-sha3-512",
		"-shake-128", "-shake-256",
		"-sm3",
		"-tiger1-128", "-tiger1-160", "-tiger1-192",
		"-tiger2-128", "-tiger2-160", "-tiger2-192",
		"-tuple-hash-128", "-tuple-hash-256",
		"-whirlpool"
	};

	for (int i = 0; i < ARRAY_LENGTH(names); ++i)
	{
		if (hash == names[i])
			return static_cast<Hash>(i);
	}
	return Hash::Invalid;
}

bool runHash(const Hash hash, const int argc, const char *argv[])
{
	const auto readNPrint = [](auto hash, const std::string &filename) -> void
	{
		std::unique_ptr<std::istream, void (*)(std::istream *)> inStream {nullptr, [](auto) {}};
		if (filename == "-")
			inStream = {&std::cin, [](auto) {}};
		else
			inStream = {new std::ifstream(filename, (std::ios_base::in | std::ios_base::binary)), [](std::istream *p) {delete p;}};

		const int bufSize = 1024 * 1024;
		auto buf = std::make_unique<char[]>(bufSize);
		while (inStream->good())
		{
			inStream->read(buf.get(), bufSize);
			hash.addData(buf.get(), inStream->gcount());
		}

		printf("%s  %s\n", hash.finalize().toString().c_str(), filename.c_str());
	};

	const auto readAllNPrint = [](auto hash, const std::string &filename) -> void
	{
		std::unique_ptr<std::istream, void (*)(std::istream *)> inStream {nullptr, [](auto) {}};
		if (filename == "-")
			inStream = {&std::cin, [](auto) {}};
		else
			inStream = {new std::ifstream(filename), [](std::istream *p) {delete p;}};

		const int tmpSize = 1024 * 1024;
		auto tmp = std::make_unique<char[]>(tmpSize);

		std::vector<char> buf;
		buf.reserve(tmpSize);
		while (inStream->good())
		{
			inStream->read(tmp.get(), tmpSize);
			buf.insert(buf.end(), tmp.get(), (tmp.get() + inStream->gcount()));
		}

		printf("%s  %s\n", hash.nextData(buf.data(), buf.size()).finalize().toString().c_str(), filename.c_str());
	};

	// when benchmarking, comment out unrelated hash as it bloats the binary
	switch (hash)
	{
		case Hash::Blake1_224:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Blake1_224(), argv[2]);
			return true;
		}

		case Hash::Blake1_256:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Blake1_256(), argv[2]);
			return true;
		}

		case Hash::Blake1_384:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Blake1_384(), argv[2]);
			return true;
		}

		case Hash::Blake1_512:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Blake1_512(), argv[2]);
			return true;
		}

		case Hash::Blake2:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Blake2(), argv[2]);
			return true;
		}

		case Hash::Blake2s:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Blake2s(), argv[2]);
			return true;
		}

		case Hash::Crc_32:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::CRC_32(), argv[2]);
			return true;
		}

		case Hash::Cshake_128:
		{
			if (argc != 5)
				return false;

			int digestLength = 0;
			try
			{
				digestLength = std::stoi(argv[2]);
			}
			catch (const std::invalid_argument &e)
			{
				return false;
			}

			readNPrint(Chocobo1::CSHAKE_128(digestLength, argv[3]), argv[4]);
			return true;
		}

		case Hash::Cshake_256:
		{
			if (argc != 5)
				return false;

			int digestLength = 0;
			try
			{
				digestLength = std::stoi(argv[2]);
			}
			catch (const std::invalid_argument &e)
			{
				return false;
			}

			readNPrint(Chocobo1::CSHAKE_256(digestLength, argv[3]), argv[4]);
			return true;
		}

		case Hash::Has160:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::HAS_160(), argv[2]);
			return true;
		}

		case Hash::Md2:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::MD2(), argv[2]);
			return true;
		}

		case Hash::Md4:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::MD4(), argv[2]);
			return true;
		}

		case Hash::Md5:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::MD5(), argv[2]);
			return true;
		}

		case Hash::Ripemd_128:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::RIPEMD_128(), argv[2]);
			return true;
		}

		case Hash::Ripemd_160:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::RIPEMD_160(), argv[2]);
			return true;
		}

		case Hash::Ripemd_256:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::RIPEMD_256(), argv[2]);
			return true;
		}

		case Hash::Ripemd_320:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::RIPEMD_320(), argv[2]);
			return true;
		}

		case Hash::Sha1:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA1(), argv[2]);
			return true;
		}

		case Hash::Sha2_224:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA2_224(), argv[2]);
			return true;
		}

		case Hash::Sha2_256:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA2_256(), argv[2]);
			return true;
		}

		case Hash::Sha2_384:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA2_384(), argv[2]);
			return true;
		}

		case Hash::Sha2_512:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA2_512(), argv[2]);
			return true;
		}

		case Hash::Sha2_512_224:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA2_512_224(), argv[2]);
			return true;
		}

		case Hash::Sha2_512_256:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA2_512_256(), argv[2]);
			return true;
		}

		case Hash::Sha3_224:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA3_224(), argv[2]);
			return true;
		}

		case Hash::Sha3_256:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA3_256(), argv[2]);
			return true;
		}

		case Hash::Sha3_384:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA3_384(), argv[2]);
			return true;
		}

		case Hash::Sha3_512:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SHA3_512(), argv[2]);
			return true;
		}

		case Hash::Shake_128:
		{
			if (argc != 4)
				return false;

			int digestLength = 0;
			try
			{
				digestLength = std::stoi(argv[2]);
			}
			catch (const std::invalid_argument &e)
			{
				return false;
			}

			readNPrint(Chocobo1::SHAKE_128(digestLength), argv[3]);
			return true;
		}

		case Hash::Shake_256:
		{
			if (argc != 4)
				return false;

			int digestLength = 0;
			try
			{
				digestLength = std::stoi(argv[2]);
			}
			catch (const std::invalid_argument &e)
			{
				return false;
			}

			readNPrint(Chocobo1::SHAKE_256(digestLength), argv[3]);
			return true;
		}

		case Hash::Sm3:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::SM3(), argv[2]);
			return true;
		}

		case Hash::Tiger1_128:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Tiger1_128(), argv[2]);
			return true;
		}

		case Hash::Tiger1_160:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Tiger1_160(), argv[2]);
			return true;
		}

		case Hash::Tiger1_192:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Tiger1_192(), argv[2]);
			return true;
		}

		case Hash::Tiger2_128:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Tiger2_128(), argv[2]);
			return true;
		}

		case Hash::Tiger2_160:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Tiger2_160(), argv[2]);
			return true;
		}

		case Hash::Tiger2_192:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Tiger2_192(), argv[2]);
			return true;
		}

		case Hash::Tuple_hash_128:
		{
			if (argc != 5)
				return false;

			int digestLength = 0;
			try
			{
				digestLength = std::stoi(argv[2]);
			}
			catch (const std::invalid_argument &e)
			{
				return false;
			}

			readAllNPrint(Chocobo1::TupleHash_128(digestLength, argv[3]), argv[4]);
			return true;
		}

		case Hash::Tuple_hash_256:
		{
			if (argc != 5)
				return false;

			int digestLength = 0;
			try
			{
				digestLength = std::stoi(argv[2]);
			}
			catch (const std::invalid_argument &e)
			{
				return false;
			}

			readAllNPrint(Chocobo1::TupleHash_256(digestLength, argv[3]), argv[4]);
			return true;
		}

		case Hash::Whirlpool:
		{
			if (argc != 3)
				return false;

			readNPrint(Chocobo1::Whirlpool(), argv[2]);
			return true;
		}

		default:
		case Hash::Invalid:
			return false;
	}

	return false;
}
