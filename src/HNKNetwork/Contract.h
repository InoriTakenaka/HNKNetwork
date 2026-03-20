#pragma once
#include<cstddef>
#include<cstdint>

namespace HNKNetwork
{
	enum class ContractType : std::uint8_t
	{
		None = 0,
		Handshake = 1,
		Data = 2,
		Termination = 3
	};
#pragma pack(push, 1)
	struct Contract
	{
	public:
		const std::byte ContractHeader{ 0x0F };
		int				LengthIndicator;
		ContractType 	Command;
		std::byte		Payload[0];
	};
#pragma pack(pop)
}