#include "DecodeCode.h"


mipsinstruction decode(int value)
{
	mipsinstruction instr;

	instr.funct = value&0b111111;
	instr.immediate = (value<<16)>>16;
	instr.rd = (value>>11)&0b11111;
	instr.rt = (value>>16)&0b11111;
	instr.rs = (value>>21)&0b11111;
	instr.opcode = (value>>26)&0b11111;

	return instr;
}


