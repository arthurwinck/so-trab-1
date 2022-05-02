#include "cpu.h"
#include <iostream>

__BEGIN_API

//getcontext= save state into a pointer
//setcontext= load state from pointer

void CPU::Context::save()
{
    //adicionar implementação
    getcontext(&this->_context);
}

void CPU::Context::load()
{
    //adicionar implementação
    setcontext(&this->_context);
}

CPU::Context::~Context()
{
    //adicionar implementação
    //O que liberar?
}

void CPU::switch_context(Context *from, Context *to)
{
    //implementação do método
    //Realiza as trocas dos ucontext_t dos Contexts.
    

    swapcontext(&from->_context, &to->_context);
}

__END_API
