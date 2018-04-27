/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_op_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 08:29:15 by fpetras           #+#    #+#             */
/*   Updated: 2018/04/27 04:33:42 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vm.h"

void	vm_op_sub(t_vm *vm, t_process *p)
{
	(void)vm;
	(void)p;
}

void	vm_op_and(t_vm *vm, t_process *p)
{
	int		param0;
	int		param1;

	(void)vm;
	param0 = (p->op.params[0].type == REG_CODE) ?
		g_reg[p->champ][p->op.params[0].value] : p->op.params[0].value;
	param1 = (p->op.params[1].type == REG_CODE) ?
		g_reg[p->champ][p->op.params[1].value] : p->op.params[1].value;
	g_reg[p->champ][p->op.params[2].value] = param0 & param1;
	if (g_reg[p->champ][p->op.params[2].value] == 0)
		g_carry = 1;
	vm_op_inc(vm, p);
}

void	vm_op_or(t_vm *vm, t_process *p)
{
	(void)vm;
	(void)p;
}

void	vm_op_xor(t_vm *vm, t_process *p)
{
	(void)vm;
	(void)p;
}