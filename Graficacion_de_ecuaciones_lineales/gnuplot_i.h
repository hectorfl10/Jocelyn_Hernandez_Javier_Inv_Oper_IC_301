
#ifndef _GNUPLOT_PIPES_H_
#define _GNUPLOT_PIPES_H_


#include <stdio.h>
#include <unistd.h>

#define GP_MAX_TMP_FILES    64


typedef struct _GNUPLOT_CTRL_ {
  
    FILE    * gnucmd ;

   
    int       nplots ;
  
    char      pstyle[32] ;

 
    char*      tmp_filename_tbl[GP_MAX_TMP_FILES] ;
 
    int       ntmp ;
} gnuplot_ctrl ;

void gnuplot_cmd(gnuplot_ctrl *  handle, char const *  cmd, ...);


void gnuplot_setstyle(gnuplot_ctrl * h, char * plot_style);


void gnuplot_set_xlabel(gnuplot_ctrl * h, char * label);


void gnuplot_set_ylabel(gnuplot_ctrl * h, char * label);


void gnuplot_resetplot(gnuplot_ctrl * h);


void gnuplot_plot_x(gnuplot_ctrl * handle, double * d, int n, char * title);

void gnuplot_plot_xy(
    gnuplot_ctrl    *   handle,
    double          *   x,
    double          *   y,
    int                 n,
    char            *   title
) ;


void gnuplot_plot_once(
    char    *   title,
    char    *   style,
    char    *   label_x,
    char    *   label_y,
    double  *   x,
    double  *   y,
    int         n
);

void gnuplot_plot_slope(
    gnuplot_ctrl    *   handle,
    double              a,
    double              b,
    char            *   title
) ;

int gnuplot_write_x_csv(
    char const * fileName,
    double const * d,
    int n,
    char const * title);

int gnuplot_write_xy_csv(
    char const *        fileName,
    double const    *   x,
    double const    *   y,
    int                 n,
    char const      *   title);

 
int gnuplot_write_multi_csv(
    char const *        fileName,
    double const    **  xListPtr,
    int                 n,
    int                 numColumns,
    char const      *   title);

void impresionPuntos(int, int ,int ,int );

void gnuplotT(int,int,int,int);



#endif
