
void ListInsert(DoublyLinkedList* L, Node* x) {
    if (L == nullptr || x == nullptr) {
        return;
    }
    
    // Получаем указатель на голову списка
    Node* head = L->head;

    // Удаление узла x из текущего положения, если он не нулевой
    if (x->prev != nullptr) {
        x->prev->next = x->next;
    }
    if (x->next != nullptr) {
        x->next->prev = x->prev;
    }
    
    if (x == head) {
        // Если x был головой, то голова списка теперь будет следующая
        L->head = x->next;
    }

    // Вставляем x в начало списка
    x->next = head;
    x->prev = nullptr;
    if (head != nullptr) {
        head->prev = x;
    }
    L->head = x;
}

