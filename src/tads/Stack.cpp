#include "../../include/tads/Stack.h"

template<typename T>
Stack<T> stack()
{
    Stack<T> st;
    st.p = NULL;
    st.cant = 0;
    return st;
}

template<typename T>
T* stackPush(Stack<T>& st, T e)
{
    Node<T>* aux = push<T>(st.p, e);
    ++st.cant;
    return &(aux->info);
}

template<typename T>
T stackPop(Stack<T>& st)
{
    T t = pop<T>(st.p);
    --st.cant;
    return t;
}

template<typename T>
bool stackIsEmpty(Stack<T> st)
{
    return isEmpty<T>(st.p);
}

template<typename T>
int stackSize(Stack<T> st)
{
    return st.cant;
}