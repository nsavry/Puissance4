/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alcu.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:39:51 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/09 21:06:47 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALCU_H
# define ALCU_H

typedef struct	s_tray
{
	int		nb_l;
	int		nb_c;
	char	me;
	char	ia;
	char	**tab;
}				t_tray;

void	ft_free(t_tray *tray);

int		ft_error(int nb, int nb_c);

t_tray	*ft_init_begin(int a, int b);
void	ft_alloc_tab(t_tray *tray);
void	ft_rand(t_tray *tray);
void	ft_print_begin(void);

int		ft_check_size(char *line, char *column);
int		ft_check_equal(t_tray *tray);
int		ft_check_win(t_tray *tray, char p);

int		ft_solve(int a, int b);
int		ft_resolve(t_tray *tray, char *line);
int		ft_put_part(t_tray *tray, int nb);
int		ft_current(t_tray *tray);

void	ft_display(t_tray *tray);
void	ft_display_two(t_tray *tray, int i, int j);

int		ft_p4_hor(t_tray *tray, char p, int i, int j);
int		ft_p4_vert(t_tray *tray, char p, int i, int j);
int		ft_p4_diag1(t_tray *tray, char p, int i, int j);
int		ft_p4_diag2(t_tray *tray, char p, int i, int j);

int		ft_ia_one(t_tray *tray);
int		ft_put_ia(t_tray *tray, int *i, int j);

int		ft_put_ia_two(t_tray *tray);
int		ft_put_between(t_tray *tray);
int		ft_put_part_ia(t_tray *tray, int j);

int		ft_near_p4(t_tray *tray, char c);

int		ft_p3_hor(t_tray *tray, char p, int i, int j);
int		ft_p3_vert(t_tray *tray, char p, int i, int j);
int		ft_p3_diag1(t_tray *tray, char p, int i, int j);
int		ft_p3_diag2(t_tray *tray, char p, int i, int j);

int		ft_check_j_hor(t_tray *tray, int i, int j);
int		ft_check_j_vert(t_tray *tray, int i, int j);
int		ft_check_j_diag1(t_tray *tray, int i, int j);
int		ft_check_j_diag2(t_tray *tray, int i, int j);

int		ft_p2(t_tray *tray, char p);
int		ft_put_p2(t_tray *tray, int i, int j);
int		ft_ia_p2(t_tray *tray);

#endif /* !ALCU_H */
