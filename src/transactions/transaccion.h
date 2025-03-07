#ifndef TRANSACCION_H
#define TRANSACCION_H

extern const char *tipoTransaccionStr[];

typedef enum {
    ANULACION,
    COMPRA
} TipoTransaccion;

typedef enum {
    AMERICAN_EXPRESS,
    VISA,
    MASTERCARD,
    DISCOVER,
    JCB
} Franquicia;

typedef struct {
    int referencia;
    char fecha[11];
    Franquicia franquicia;
    TipoTransaccion tipo;
    float monto;
    char pan[17];
    char cvv[4];
    char fechaExp[5];
} Transaccion;

#endif //TRANSACCION_H
